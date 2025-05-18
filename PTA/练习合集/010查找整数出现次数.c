#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++ ){
        scanf("%d",&arr[i]);
    }
    int want;
    scanf("%d",&want);
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == want){
            cnt++;
        }
    }
    printf("%d",cnt);
}
