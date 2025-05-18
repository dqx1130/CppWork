#include <stdio.h>
int main(){
    int n;
    while(scanf("%d",&n)!= EOF){
        int N = n + 1;
        int a[N][N];
        //初始化二维数组
        for (int i = 0 ; i < N ; i++){
            for (int j = 0 ; j < N; j++){
                a[i][j] = 0;
                a[i][0] = 1;
            }
        }
        //填充杨辉三角
        for (int i = 1 ; i < N ; i++){
            for (int j = 1 ; j < N; j++){
                a[i][j] = a[i-1][j] + a[i-1][j-1];
            }
        }
        //打印
        for (int i = 0 ; i < N ; i++){
            for (int j = 0 ; j <= i; j++){
                printf("%d",a[i][j]);
                if (j != i){
                    printf(" ");
                }
            }
            if (i != n){
                printf("\n");
            }
        }
    }
}