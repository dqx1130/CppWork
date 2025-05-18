#include<stdio.h>
int sum(int a[], int n);
int main() 
{ 
    int a[10],n=0; 
    while( scanf("%d",&a[n])==1 ){
        n++;
    } 
    printf("%d\n",sum(a,n) ); 
}
int sum(int a[], int n){
    int res = 0;
    while (n--){
        res += *a++;
    }
    return res;
}