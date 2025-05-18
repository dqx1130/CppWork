#include<stdio.h>
//将数组a前n个元素的初值设置为m
void init(int a[], int n, int m);
int main()
{
    int a[10],i,n,m;
    scanf("%d%d",&n,&m);
    init(a,n,m);
    printf("%d\n",n);
    for(i=0;i<n;i++){
       printf(" %d",a[i]);
    }
    return 0;
}

void init(int a[], int n, int m){
    while(n--){
        *a++ = m;
        
    }
}