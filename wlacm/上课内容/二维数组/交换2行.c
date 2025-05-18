#include <stdio.h>
int main(){
    //录入
    int n ;
    scanf("%d",&n);
    int arr[n][n];
    for (int i = 0 ; i < n;i++){
        for (int j = 0 ; j < n ; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int a , b ;
    scanf("%d %d",&a,&b);
    a -= 1;
    b -= 1;
    // for (int i = 0 ; i < n;i++){
    //     for (int j = 0 ; j < n ; j++){
    //         printf("%d",arr[i][j]);
    //         if(j!=n-1){
    //             printf(" ");
    //         }
    //     }
    //     if(i != n-1 ){
    //         printf("\n");
    //     }
    // }

    //交换
    int tmp[n];
    for (int i = 0 ; i < n ; i++){
        tmp[i] = arr[a][i];
    }
    for (int i = 0 ; i < n ; i++){
        arr[a][i] = arr[b][i];
    }
    for (int i = 0 ; i < n ; i++){
        arr[b][i] = tmp[i];
    }
    //输出
    for (int i = 0 ; i < n;i++){
        for (int j = 0 ; j < n ; j++){
            printf("%d",arr[i][j]);
            if(j!=n-1){
                printf(" ");
            }
        }
        if(i != n-1 ){
            printf("\n");
        }
    }

    return 0;
}