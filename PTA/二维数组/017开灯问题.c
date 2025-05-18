#include <stdio.h>
int main(){
    int n , k ;
    scanf("%d %d",&n,&k);
    //第一个人开灯
    int a[n+1];
    for (int i = 1; i < n + 1;i++){
        a[i] = 1;
    }
    // for ( int o = 1; o < n + 1 ; o++){
    //     printf("%3d ",o);
    // }
    // printf("\n");
    //上人
    for (int j = 2; j <= k ; j++){
        // 开关灯
        for (int m = j;  m < n+1 ;m++){
            if (m % j == 0){
                a[m] = -a[m];
            }
            // for ( int o = 1; o < n + 1 ; o++){
            //     printf("%3d",a[o]);
            // }
            // printf("\n");
        }
    }
    //统计灯
    int open[n+1];
    int cnt = 0;
    for(int i = 1; i < n + 1 ; i++){
        if(a[i] == 1){
            open[cnt++] = i;
        }
    }
    for (int i = 0; i < cnt ; i++ ){
        printf("%d",open[i]);
        if (i != cnt-1){
            printf(" ");
        }
    }
}