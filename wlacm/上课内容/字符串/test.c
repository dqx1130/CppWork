#include <stdio.h>
#include <ctype.h>
int main(){
    char s[10005];
    int count[26] = {0};
    int total = 0;
    
    while(fgets(s,sizeof(s),stdin)){
        for (int i = 0 ; s[i] ; i ++){
            if (isalpha(s[i])){
                count[toupper(s[i]) - 'A'] ++;
                total ++;
            }
        }
    }
    for (int i ; i < 26; i++){
        printf("%c:%.2f%%",'A' + i,(count[i] * 100.0) / total);
    }
    return 0;
}