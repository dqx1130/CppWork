#include <stdio.h>
void sort(int a[],int n){
    //排序
    for(int i = 0 ; i < n ; i ++){
        int swap = 0;
        for(int j = 0 ; j < n - i - 1 ; j ++){
            if (a[j] < a[j+1]){
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
                swap = 1;
            }
        }
        if (swap == 0){
            break;
        }
    }
    // for (int i = 0 ;i < n ; i++){
    //     printf("%d ",a[i]);
    // }
    int k = 1;
    int real = 1 ;
    for (int i = 0; i < n ; i++){
        if (i != 0 && a[i] != a[i-1]){
            k++;
        }
        printf("%d %d %d",real,k,a[i]);
        printf("\n");
        real ++;
    }

}
int main(){
    int n;
    scanf("%d",&n);
    int a[100];
    for(int i= 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    sort(a,n);
}