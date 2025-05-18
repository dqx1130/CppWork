#include <stdio.h>
int dayofyear(int y,int m , int d){
    //0 正常 ， 1 润
    int a[][13] = {{0,31,28,31,30,31,30,31,31,30,31,30,31},
                    {0,31,29,31,30,31,30,31,31,30,31,30,31}};
    int f = (y % 4 == 0 && y % 100 != 0 || y % 400 == 0);     
    for (int i = 1; i < m - 1; i++){
        d += a[f][i];
    }
    return d;
}
int main(){
    int y , m ,d ;
    while (scanf("%d %d %d",&y,&m,&d) != EOF){
        printf("%d\n",dayofyear(y,m,d));
    }
}