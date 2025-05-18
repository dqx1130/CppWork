// 幻方是一个很神奇的N*N矩阵，它的每行、每列与对角线，加起来的数字和都是相同的。
// 我们可以通过以下方法构建一个幻方。（阶数为奇数）
// 1.第一个数字写在第一行的中间
// 2.下一个数字，都写在上一个数字的右上方：
// a.如果该数字在第一行，则下一个数字写在最后一行，列数为该数字的右一列
// b.如果该数字在最后一列，则下一个数字写在第一列，行数为该数字的上一行
// c.如果该数字在右上角，或者该数字的右上方已有数字，则下一个数字写在该数字的下方
#include <stdio.h>
void fuck(int arr[][],int N);
int main()
{
    // 初始化矩阵
    int N;
    scanf("%d", &N);
    int arr[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            arr[i][j] = 0;
        }
    }
    // 填充幻方
    fuck(arr,N);
    // 打印幻方
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
void fuck(int arr[][], int N){
    //条件1 1先塞进去
    int col = 0;
    int row = N/2; 

}
