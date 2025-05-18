#include <stdio.h>
const int N = 1000+5;
void select_sort(int[] , int , int );
int main(){
    int a[N];
    int n , k ;
    scanf("%d%d",&n,&k);
    for(int i = 0; i < n ; i ++){
        scanf("%d",&a[i]);
    }
    select_sort(a,n,k);
    for(int i = 0; i < n-1 ; i ++){
        printf("%d ",a[i]);
    }
    printf("%d",a[n-1]);
}
void swap(int *x , int *y){
    int t = *x;
    *x = *y;
    *y = t;
}
void select_sort(int a[] , int n , int k ){
    for(int i = 0 ; i < k ; i++){
        int min = i;
        for(int j = i + 1; j < n  ; j++){
            if(a[j] < a[min]){
                min = j;
            }
        }
        swap(&a[min],&a[i]);
    }
}