#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    if (n < 2){
        printf("not prime");
    } else{
        int j = 1;
        for (int i = 2; i <= (int)sqrt(n);i++){
            if (n % i == 0){
                j = 0;
                printf("no prime");
                break;
            }
        }
        if (j == 1){
            printf("prime");
        }
    }
    return 0;
}