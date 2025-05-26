#include <stdio.h>
#include <stdlib.h>

struct student {
    int no;           // 学号
    char name[20];    // 姓名
    float x1, x2, x3, aver;  // 三门课成绩和平均分
};

int cmp(const void *pa, const void *pb) {
    struct student *s1 = (struct student *)pa;
    struct student *s2 = (struct student *)pb;
    return s1->no - s2->no;  // 按学号升序排序
}

int main() {
    int n;
    scanf("%d", &n);
    struct student s[45];

    for (int i = 0; i < n; i++) {
        scanf("%d%s%f%f%f", &s[i].no, s[i].name, &s[i].x1, &s[i].x2, &s[i].x3);
        s[i].aver = (s[i].x1 + s[i].x2 + s[i].x3) / 3.0;  // 计算平均分
    }

    qsort(s, n, sizeof(struct student), cmp);  // 排序

    for (int i = 0; i < n; i++) {
        printf("no:%d,name:%s,aver:%.2f\n", s[i].no, s[i].name, s[i].aver);
    }

    return 0;
}
