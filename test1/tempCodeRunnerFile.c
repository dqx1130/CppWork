#include <stdio.h>
int main() {
    // 输入
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 冒泡排序
    int swap;
    for (int i = n - 1; i >= 0; i--) {
        swap = 0;
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                swap = 1;
            }
        }

        // 如果没有发生交换，直接跳出循环
        if (swap == 0) {
            break;
        }

        // 打印当前状态
        for (int k = 0; k < n; k++) {
            printf("%d", arr[k]);
            if (k != n - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}