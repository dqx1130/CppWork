#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int want;
    for(int i = 0; i < n ;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&want);
    int index = -1;
    for(int i = 0; i < n ;i++){
        if (arr[i] == want){
            index = i;
        }
    }
    printf("%d",index);
    return 0;
}