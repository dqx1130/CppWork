#include <stdio.h>
int fact(int n);
int sum(int res);
int gcd(int m, int n);
int main(){
    int n;
    scanf("%d",&n);
    int m;
    scanf("%d",&m);
    int res = sum(n);
    printf("%d",res);
}
int fact(int n){
    if(n == 1){
        return 1;
    }
    return  n * fact(n-1);
}
int sum(int n){
    int res = 0;
    while (n >= 1){
        res += fact(n);
        n--;
    }
    return res;
}

int gcd(int m , int n){
    return m == 0 ? m : gcd(n , m % n);
}