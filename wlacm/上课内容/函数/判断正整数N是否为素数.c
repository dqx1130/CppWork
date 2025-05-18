#include <stdio.h>
int isPrime(int n){
    if (n < 2){
        return 0;
    }
    // 使用试除法：从2到n-1逐个检查是否能整除n
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int m ,i ,k ;
    while(scanf("%d", &m) == 1 ){
        if (isPrime(m)){
            printf("%d is a prime number\n", m);
        }else
        {
            printf("%d is not a prime number\n", m); 
        }
    }
    return 0;
}