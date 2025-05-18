#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0 ; j < n ; j++){
            scanf("%d",&a[i][j]);
        }
    }
    //边界
    int minX = 0;
    int maxX = n-1;
    int minY = 0;
    int maxY = n-1;
    int max = n * n;
    int cnt = 0;
    int x = 0;
    int y = 0;
    while (cnt < max){
        //D
        for (int i = minX; i <= maxX && cnt < max ;i++){
            printf("%d\n",a[minY][i]);
            cnt ++;
        }
        minY ++;
        //S
        for (int i = minY; i <= maxX && cnt < max;i++){
            printf("%d\n",a[i][maxX]);
            cnt ++;
        }
        maxX --;
        //A
        for (int i = maxX; i >= minX && cnt < max; i --){
            printf("%d\n",a[maxY][i]);
            cnt ++;
        }
        maxY --;
        //W
        for (int i = maxY;i >= minY && cnt < max; i --){
            printf("%d\n",a[i][minX]);
            cnt ++;
        }
        minX ++;
    }
}