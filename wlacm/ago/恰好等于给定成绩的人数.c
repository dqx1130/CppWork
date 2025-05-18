#include <stdio.h>
int main(){
    int n;
    int arr[220];
    int res = 0;
    int want;
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&want);
    for (int i = 0; i < n; i++){
        if (arr[i] == want){
            res += 1;
        }
    }
    printf("%d\n",res);
    return 0;
}