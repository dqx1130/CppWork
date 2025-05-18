#include <stdio.h>
int fac(int x){
    if (x == 1){
        return 1;
    }
    else{
        return x * fac(x-1);
    }
}
int comb(int m ,int n){
    int res;
    res = fac(m) / (fac(n) * fac(m - n));
    return res ;
}



int main(){
    int a , b ;
    while(scanf("%d %d",&a , &b ) != EOF){
        printf("%d\n",comb(a,b));
    }
    return 0;
}