#include <stdio.h>
void merge(int a[], int b[],int n){
    int new[n*2];
    int i = 0;
    int j = 0;
    int k = 0;
    while(i < n || j < n){
        new[k++] = a[i++];
        new[k++] = b[j++];
    }
    printf("{");
    for (int p = 0 ; p < k ; p++){
        printf("%d",new[p]);
        if(p!=k-1){
            printf(",");
        }
    }
    printf("}");
}
int main(){
    int n ;
    scanf("%d",&n);
    int a[n];
    for(int i=0 ; i < n ; i ++){
        scanf("%d",&a[i]);
    }
    int b[n];
    for(int i=0 ; i < n ; i ++){
        scanf("%d",&b[i]);
    }
    merge(a,b,n);
    return 0;
}