#include <stdio.h>
void tenToTwo(int n);
int main(){
    int n;
    while(scanf("%d",&n) != EOF){
        tenToTwo(n);
    }
    return 0;
}
void tenToTwo(int n){
    //0
    if (n == 0){
        printf("0");
        printf("\n");
        return;
    }
    //负数
    int j = 0;
    if (n < 0){
        printf("-");
        n = -n;
    }
    //转2
    int a[35];
    int i = 0;
    while(n>0){
        a[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i-1; j >= 0 ; j-- ){
        printf("%d",a[j]);
    }
    printf("\n");
    return;
}