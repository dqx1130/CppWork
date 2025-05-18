#include <stdio.h>
// 6
// -2 11 -4 13 -5 -2
int main(){
    long long n ;
    long long res = 0;
    //输入
    scanf("%lld", &n);
    long long arr[n];
    long long dp[n];
    for(long long i = 0; i < n; i++){
        scanf("%lld", &arr[i]);
    }
    //循环计算
    dp[0] = arr[0];
    res = arr[0];
    for(long long j = 1 ; j < n; j++){
        if (dp[j-1] > 0){
            dp[j] = dp[j-1] + arr[j];
        }else{
                dp[j] = arr[j];
            }
        if (dp[j] > res){
            res = dp[j];
        }else{
            res = res;
        }
    }
    printf("%lld\n", res);
    return 0;
}