#include <stdio.h>
#include <math.h>
#include <string.h>
void f(int n)
{
    // 处理输入为0的特殊情况
    if (n == 0) {
        printf("0\n");
        return;
    }

    int index = 0;
    char res[33];
    int j = 0;

    //处理负号
    if (n < 0){
        j = 1;
        n = n * -1;
    }

    //循环除以2

    while(n > 0){
        res[index++] = (n % 2) + '0';
        n /= 2 ;
    }    
    //负数加符号
    if (j){
        res[index++] = '-';
    }
    // 反转字符串
    for (int i = 0; i < index / 2; i++) {
        char temp = res[i];
        res[i] = res[index - i - 1];
        res[index - i - 1] = temp;
    }
    // 添加字符串结束符
    res[index] = '\0';
    printf("%s\n",res);
}
int main(){
    int n;
    while(scanf("%d",&n) == 1 ){
        f(n);
    }
    return 0;
}
