#include <stdio.h>

int main() {
    // 录入信息
    int n;
    scanf("%d", &n);
    int a[n][n];

    // 录入二维数组
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // 计算面积
    int areaMax = n * n;
    
    // 设置起点终点
    int h1 = 0, h2 = n - 1, w1 = 0, w2 = n - 1;
    int area = 0;

    // 循环输出
    while (area < areaMax) {
        // 右移输出 
        for (int q = w1; q <= w2; q++) {
            printf("%d", a[h1][q]);
            printf("\n");
            area++;
        }
        h1++;  // 最上一行已经输出完

        if (area >= areaMax) break;
        

        // 下移输出
        for (int p = h1; p <= h2; p++) {
            printf("%d", a[p][w2]);
            printf("\n");
            area++;
        }
        w2--;  // 最右一列已经输出完

        if (area >= areaMax) break;
        

        // 左移输出
        for (int q = w2; q >= w1; q--) {
            printf("%d", a[h2][q]);
            printf("\n");
            area++;
        }
        h2--;  // 最下一行已经输出完

        if (area >= areaMax) break;
        

        // 上移输出
        for (int p = h2; p >= h1; p--) {
            printf("%d", a[p][w1]);
            printf("\n");
            area++;
        }
        w1++;  // 最左一列已经输出完

        if (area >= areaMax) break;


    }

    return 0;
}
