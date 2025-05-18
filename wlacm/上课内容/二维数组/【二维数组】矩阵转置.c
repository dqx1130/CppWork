#include <stdio.h>
int main(){
    int M,N;
    scanf("%d %d",&M,&N);
    int arr[M][N];
    for (int i = 0 ; i < M ; i ++){
        for (int j = 0 ; j < N ; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int brr[N][M];
    for (int i = 0 ; i < N ; i ++){
        for (int j = 0 ; j < M ; j++){
            brr[i][j] = arr[j][i]; 
        }
    }
    for (int i = 0 ; i < N ; i ++){
        for (int j = 0 ; j < M ; j++){
            printf(" %d",brr[i][j]);
        }
        if (i!=N-1){
            printf("\n");
        }
    }
}