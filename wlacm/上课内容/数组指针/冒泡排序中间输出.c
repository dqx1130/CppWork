#include <stdio.h>
//冒泡排序
void bubbleSort(int *a, int n, int k );
//交换
void swap(int * , int *);
//输出
void print(int * , int );

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n];
    for (int i = 0 ; i < n ; i ++){
        scanf("%d",&a[i]);
    }

    bubbleSort(a,n,k);
    print(a,n);
    return 0;
}
void print(int *a,int n){
    for (int *ap = a ; ap < a + n ; ap++){
        printf("%d ",*ap);
    }
}
void swap(int *px, int *py){
    int t = *px;
    *px = *py;
    *py = t;
}
void bubbleSort(int *a , int n,int k ){
    int cnt = 0;
    for(int i = 1 ; i < n;i++){
        for (int j = 0 ; j < n - i ; j ++){
            if (a[j] > a[j+1]){
                swap(a + j , a + j + 1);
                //swap(a[j],a[j+1]);
                cnt ++;
                if (cnt == k){
                    return;
                }
            }
        }
    }
}

