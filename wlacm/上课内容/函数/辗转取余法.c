#include <stdio.h>
int gcd(int a, int b){
    int r;
    r = a % b;
    if (r == 0){
        return b;
    }
    a = b;
    b = r;
    return gcd(a,b);
}

int main(){
    int a , b ;
    while(scanf("%d %d",&a,&b)!= EOF){
        printf("%d\n",gcd(a,b));
    }
    return 0;
}