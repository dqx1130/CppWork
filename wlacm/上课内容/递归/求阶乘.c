#include <stdio.h>
long long fact(int n){
    if (n == 1){
        return 1;
    }
    return n * fact(n-1);
}
int main(){
    int n;
    while(scanf("%d",&n) != EOF){
        printf("%lld",fact(n));
    }
    return 0;
}