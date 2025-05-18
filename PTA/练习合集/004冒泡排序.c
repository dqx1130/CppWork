#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    int swap;
    for (int i = 0 ; i < n - 1; i ++){
        swap = 0;
        for(int j = 0 ; j < n - i - 1 ; j ++){
            if (arr[j] > arr[j+1]){
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                swap = 1;
            }
        }
        for (int k = 0 ; k < n ; k ++ ){
            printf("%d",arr[k]);
            if (k != n - 1 ){
                printf(" ");
            }
        }
        printf("\n");
        if (swap == 0){
            break;
        }
    }

}
