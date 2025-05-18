#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0 ; i <n ; i++){
        scanf("%d",&arr[i]);
    }
    int want;
    scanf("%d",&want);
    int f = -1;
    for (int i = 0; i < n ; i++ ){
        if (arr[i] == want ){
            f = i;
            break;
        }
    }
    printf("%d",f);
}