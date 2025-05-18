#include <stdio.h>
int main(){
    int n , k;
    scanf("%d %d",&n,&k);
    printf("nk输入完成");
    //灯 -1 关， 1 开
    int arr[n+1];
    for (int i = 1; i < n+1 ; i++){
        arr[i] = -1;
    }
    printf("灯关");
    //循环人
    for (int i = 1 ; i <= k ; i++){
        //循环灯，按开关
        for(int j = 1; j % i == 0; j++){
            arr[j] = -arr[j];
        }
    }
    //检查状态
    for(int i = 1 ; i < n+1; i++){
        if (arr[i] == 1){
            printf("%d",i);
        }
        if (i != n){
            printf(" ");
        }
    }
}