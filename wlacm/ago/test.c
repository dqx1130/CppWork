#include <stdio.h>
#include <string.h>

// 将十进制数转换为二进制数的函数
void decimalToBinary(int n) {
    // 处理输入为0的特殊情况
    if (n == 0) {
        printf("0\n");
        return;
    }

    // 声明一个字符数组来存储二进制结果
    // 大小为33是因为：32位二进制数 + 可能的负号 + 字符串结尾的\0
    char binary[33];
    int index = 0;          // 数组索引
    int isNegative = 0;     // 标记是否为负数

    // 处理负数情况
    if (n < 0) {
        isNegative = 1;     // 设置负数标志
        n = -n;             // 取绝对值
    }

    // 核心转换过程：
    // 1. 不断除以2得到余数
    // 2. 余数就是二进制位（从右往左）
    while (n > 0) {
        binary[index++] = (n % 2) + '0';  // 将数字转换为字符（0或1）
        n /= 2;                           // 除以2继续处理
    }

    // 如果是负数，添加负号
    if (isNegative) {
        binary[index++] = '-';
    }

    // 反转字符串，因为我们是从右往左存储的二进制位
    // 需要反转才能得到正确的二进制表示
    for (int i = 0; i < index / 2; i++) {
        char temp = binary[i];
        binary[i] = binary[index - i - 1];
        binary[index - i - 1] = temp;
    }

    // 添加字符串结束符
    binary[index] = '\0';
    
    // 输出结果
    printf("%s\n", binary);
}

int main() {
    int N;
    // 持续读取输入的十进制数，直到输入结束
    while (scanf("%d", &N) == 1) {
        decimalToBinary(N);
    }
    return 0;
}
