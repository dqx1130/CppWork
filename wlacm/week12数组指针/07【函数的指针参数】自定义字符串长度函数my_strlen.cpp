#include <stdio.h>
#define N (100+5)

int my_strlen(char*);

int main(){
    char s[N];
    while (gets(s)){
        int n = my_strlen(s);
        printf("%d\n",n);
    }
    return 0;
}
int my_strlen(char* s){
    char *t = s;
    while(*++t);
    return t - s;
}