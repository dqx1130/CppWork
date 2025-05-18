#include <stdio.h>
int main(){
    //输入 
    int n; 
    scanf("%d", &n);
    //生成数组,数组下标就是元素值 0 ~ n
    int arr[n+1];
    for (int i = 0; i <= n+1; i++){
        arr[i] = i;
    }
    //筛选法
    arr[1] = 0;
    int p = 2;
    while(p <= n){
        for(int k = p ; k <= n ; k++){
            if (k != p && k % p == 0){
                arr[k] = 0;
            }
        }
        p++;
    }
    //输出
    int count = 0;
    for (int j = 2; j <= n; j++){
        if (arr[j] != 0){
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
