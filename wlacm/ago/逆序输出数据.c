#include <stdio.h>
int main(){
    int n;
    int a[100];
    while(scanf("%d",&n)!=EOF){
        for(int i = 0; i< n ; i++){
            scanf("%d",&a[i]);
        }
        for(int j = n-1; j >= 0; j--){
            printf("%d",a[j]);
            if(j != 0){
                printf(" ");
            }
        }
        printf("\n");
    }
}