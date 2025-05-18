#include <stdio.h>
int main(){
    int a[10];
    a[0] = 0;
    for (int i = 1; i < 10 ; i ++){
        scanf("%d",&a[i]);
    }
    int res = a[1] * a[5] * a[9] 
            + a[2] * a[6] * a[7] 
            + a[3] * a[4] * a[8]  
            - a[1] * a[6] * a[8] 
            - a[2] * a[4] * a[9] 
            - a[3] * a[5] * a[7];
    printf("%d",res);
}