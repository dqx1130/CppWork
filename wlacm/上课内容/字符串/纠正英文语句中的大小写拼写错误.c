#include <stdio.h>
#include <string.h>
int main(){
    char s[51];
    gets(s);
    int l = strlen(s);
    for (int i = 0 ; i < l ; i ++){
        //首字母大写
        if(i == 0){
            if (s[i] >= 'a' && s[i] <= 'z' ){
                s[i] -= 32;
            }
        }else{
            //.!?后面跟大写
            if (s[i-1] == '!' || s[i-1] == '.'||s[i-1] == '?'){
                if (s[i] >= 'a' && s[i] <= 'z'){
                    s[i] -= 32;
                }
            }else{
                if (s[i] >= 'A' && s[i] <= 'Z'){
                    s[i] += 32;
                }
            }
        }  
    }
    printf("%s",s);
    return 0;
}