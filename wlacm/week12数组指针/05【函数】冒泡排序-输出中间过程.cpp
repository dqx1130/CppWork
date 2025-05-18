#include <stdio.h>
const int N = 1000+5;
void bubble_sort(int[],int,int);
int main(){
    int a[N];
    int n,k;
    scanf("%d %d",&n,&k);
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&a[i]);
    }
    bubble_sort(a,n,k);
    for (int i = 0 ; i < n ; i ++){
        printf("%d ",a[i]);
    }
    return 0;
}
void swap(int *x , int *y){
    int t = *x;
    *x = *y;
    *y = t;
}
void bubble_sort(int a[],int n,int k ){
    for(int i = 0 ; i < k ; i++){
        int flag = 0;
        for(int j = 0 ; j < n - i - 1 ;j++){
            if (k <= 0){
                return;
            }
            if (a[j] > a[j+1]){
                swap(a+j,a+j+1);
                flag = 1;
            }
        }
        if (!flag){
            break;
        } 
    }
}