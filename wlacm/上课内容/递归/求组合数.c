#include <stdio.h>
int comb(int,int);
int main(){
    int a,b;
    while(scanf("%d %d",&a,&b) != EOF){
        printf("%d\n",comb(a,b));
    }
    return 0;
}

int comb(int m ,int n){
    if (n < 0 || m < 0 || m < n){
        return 0;
    }
    if (n == m || n == 0){
        return 1;
    }
    if ( m >= n && n >= 0){
        return comb(m-1,n) + comb(m-1,n-1);
    }

}