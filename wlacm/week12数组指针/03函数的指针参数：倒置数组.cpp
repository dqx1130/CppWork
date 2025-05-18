#include<stdio.h>
void reverse(int a[], int n);
int main()
{
    int a[10],i,n=0;
    while( scanf("%d",&a[n])==1 ){
        n++;
    } 
    reverse(a,n);
    for(i=0;i<n;i++){
        printf(" %d\n",a[i] );
    }
}
void swap(int *x , int *y){
    int t;
    t = *x;
    *x = *y;
    *y = t;
}
void reverse(int a[] , int n){
    int *start = a;
    int *end = a + n - 1;
    while(start < end){
        swap(start,end);
        start++;
        end--;
    }
}
