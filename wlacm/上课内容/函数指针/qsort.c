#include <stdio.h>
#include <stdlib.h>
void print(int *a, int n);
//升序
int cmp1(const void *pa , const void *pb){
    return *(int*)pa - *(int*)pb;
}
//降序
int cmp2(const void *pa , const void *pb){
    return *(int*)pb - *(int*)pa;
}
int main(){
    int a[] = {5,3,1,2,4};
    int n = sizeof a / sizeof *a;
    qsort(a,n,sizeof *a,cmp1); //快速排序
    print(a,n);
}
void print(int *a , int *b){
    for(int *p = a ; p < a + n ; p++ ){
        printf("%d",*p);
    }
        printf("\n");
}