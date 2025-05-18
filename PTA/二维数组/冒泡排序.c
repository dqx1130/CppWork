#include <stdio.h>
void sort(int arr[],int n){
    int i , j ;
    int swapped;
    for (i = 0 ; i < n-1;i++){
        //交换标记
        swapped = 0;
        for (j = 0 ; j < n - i - 1; j ++){
            if ( arr[j] > arr[j+1]){
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                //交换
                swapped = 1;
            }
        }
        //输出
        for (j = 0; j < n; j++) {
            printf("%d", arr[j]);
            if (j < n - 1) {
                printf(" ");
            }
        }
        printf("\n");
        //如果没有交换，则提前退出
        if(swapped == 0){
            break;
        }
     }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i= 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    return 0;
}