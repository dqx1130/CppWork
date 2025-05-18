#include <stdio.h>
#include <ctype.h>
int main() {
    char s[10005];
    int count[26] = {0};  // 用于统计26个字母的出现次数
    int total = 0;        // 字母总数
    // 读取整篇文章
    while (fgets(s, sizeof(s), stdin)) {
        for (int i = 0; s[i]; i++) {
            if (isalpha(s[i])) {  // 判断是否为字母
                count[toupper(s[i]) - 'A']++;  // 转换为大写后统计
                total++;
            }
        }
    }
    // 输出每个字母的频率
    for (int i = 0; i < 26; i++) {
        printf("%c: %.2f%%\n", 
               'A' + i, 
               (count[i] * 100.0) / total);
    }
    
    return 0;
}