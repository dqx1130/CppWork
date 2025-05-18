#include <stdio.h>
void mystrcpy(char * , char * );
int mystrlen(char * );
int main(){
    char a[25];
    mystrcpy(a,"Hello python");
    puts(a);
    printf("%d\n",mystrlen(a));
    return 0;
}
void mystrcpy(char *s1 , char *s2){
    while ( *s1 ++ = *s2 ++);
}
int  mystrlen(char *s){
    // int x = 0;
    // for (int i = 0 ; s[i] != '/0' ; i++){
    //     x++;
    // }
    // return x;
    char *t = s ;
    while (*++t);
    return t - s; 
}
