#include <stdio.h>
#include <string.h>
int main(){
    char s[25];
    gets(s);
    int n = strlen(s),x=0;
    for (int i = 0 ; i < n; i++){
        if(s[i] > '0' && s[i] < '9'){
            x++;
        }
    }
    printf("%d",x);
    return 0;
}
