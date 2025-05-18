#include <stdio.h>
void print(int m,int n);
int main(){
    int m,n;
    while(scanf("%d %d",&m,&n) != EOF){
        print(m,n);
        printf("\n");
    }
    return 0;
}
void print(int m , int n){
    if (m > n){
        int tmp;
        tmp = m;
        m = n;
        n = tmp;  
    }
    if (m == n){
        printf("%d",n);
        return;
    }
    printf("%d ",m);
    return print(m+1,n);
}