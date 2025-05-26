#include <stdio.h>
#define MAXN (100+5)
void strmcpy(char* , int , char*);
int main(){
    char t[MAXN] , s[MAXN];
    int m ;

    scanf("%d\n",&m);
    gets(t);
    strmcpy(t,m,s);
    printf("%s",s);
    return 0;
}
int getlen(char *k){
    char *t = k;
    while(*++ t );
    return t - k;
}
void strmcpy(char *t , int m, char *s){
    if (m > getlen(t)){
        return;
    }
    char *start = t + m - 1;
    while(*start){
        *s++ = *start++;
    }
    *s = '\0';
}