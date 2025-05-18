#include <stdio.h>
int main(){
    int n;
    int arr[201];
    scanf("%d",&n);
    for(int i = 0 ; i <n ;i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    int high;
    scanf("%d",&high);
    for(int j = 0; j < n ;j++){
        if (arr[j] - 40 <= high){
            count ++;
        }
    }
    printf("%d",count);
    return 0;
}