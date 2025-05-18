#include <stdio.h>
int f(int m , int n);
int main(){
    int n;
    scanf("%d",&n);
    while (n -- ){
        int a,b;
        scanf("%d %d",&a,&b);
        printf("%d\n",f(a,b));
    }
    return 0;
}
int f(int m, int n) {
    // 如果梨的数量为 0 或盘子的数量为 1，则只有一种分法
    if (m == 0 || n == 1) {
        return 1;
    }
    // 如果梨的数量小于盘子的数量，则相当于减少盘子的数量
    if (m < n) {
        return f(m, m);
    }
    // 分两种情况：至少有一个盘子为空，或者所有盘子都不为空
    return f(m, n - 1) + f(m - n, n);
}