#include <stdio.h>
#include <string.h>
#define MAXN (100+5)
int ispalindrome(char*);
int main(){
    char s[MAXN];
    gets(s);
    if(ispalindrome(s)){
        printf("yes");
    }else{  
        printf("no");
    }
}
int ispalindrome(char* s){
    char *start = s;
    char *end = s + strlen(s) - 1;
    while(*start < *end){
        if (*start != *end){
            return 0;
        }
        *start ++;
        *end --;
    }
    return 1;
}