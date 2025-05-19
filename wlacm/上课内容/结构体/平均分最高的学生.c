#include <stdio.h>
struct student{
    int no;           //学号
    char name[20];        //姓名
    float x1,x2,x3,aver;   //3门课的成绩和平均分
};
int main(){
    int n;
    scanf("%d",&n);
    struct student ms,ts;    //定义2个结构体变量
    ms.aver = -1;
    for (int i = 0; i < n ; i++){
        scanf("%d%99s%f%f%f",&ts.no,ts.name,&ts.x1,&ts.x2,&ts.x3);
        ts.aver = (ts.x1 + ts.x2 + ts.x3) / 3;
        if(ts.aver > ms.aver){
            ms = ts;
        }
    }
    printf("no:%d,name:%s,aver:%.2f\n",ms.no,ms.name,ms.aver);
    return 0;
}