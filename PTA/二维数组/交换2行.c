#include <stdio.h>
void swap(int arr[][20],int n, int fir , int sec){
    int tmp[20];
    for (int i = 0 ; i < n ; i ++){
        tmp[i] = arr[fir][i];
    }
    for (int i = 0 ; i < n ; i ++){
        arr[fir][i] = arr[sec][i];
    }
    for (int i = 0 ; i < n ; i ++){
        arr[sec][i] = tmp[i];
    }
    for (int i = 0 ; i < n  ; i ++){
        for (int j = 0 ; j < n ; j++){
            printf("%d",arr[i][j]);
            if ( j != n -1){
                printf(" ");
            }
        }
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[20][20];
    for (int i = 0 ; i < n  ; i ++){
        for (int j = 0 ; j < n ; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int fir, sec;
    scanf("%d %d",&fir,&sec);
    fir --;
    sec --;
    swap(arr,n,fir,sec);
    return 0;
}
