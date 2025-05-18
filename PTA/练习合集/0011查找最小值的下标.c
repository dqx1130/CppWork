#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    int index = 0;
    for (int i = 1 ; i < n ; i++){
        if (arr[index] > arr[i]){
            index = i;
        }
    }
    printf("%d %d",arr[index],index);
}