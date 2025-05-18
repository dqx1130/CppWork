#include <stdio.h>
int main(){
    int n ;
    int x , y ;
    scanf("%d",&n);
    int arr[n][n];
    for (int i = 0 ; i < n ; i ++){
        for (int j = 0 ; j < n ; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    scanf("%d %d",&x,&y);
    x -= 1;
    y -= 1;
    if (x > 0){
        printf("up:%d\n",arr[x-1][y]);
    }   else{
        printf("up:None\n");
    }
    if (x < n-1){
        printf("down:%d\n",arr[x+1][y]);
    }  else{
        printf("down:None\n");
    }
    if (y > 0){ 
        printf("left:%d\n",arr[x][y-1]);
    }   else{
        printf("left:None\n");
    }
    if (y < n-1){ 
        printf("right:%d",arr[x][y+1]);
    }   else{
        printf("right:None\n");
    }
    return 0;
}