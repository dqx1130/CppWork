#include <stdio.h>
double mypow(double,int);
int main(){
    int n;
    double x;
    while(scanf("%lf %d",&x,&n) != EOF){
        printf("%.3lf\n", mypow(x,n));
    }
}
double mypow(double x, int n){
    if (n == 1){
        return x;
    }
    return x * mypow(x,n-1);
 }