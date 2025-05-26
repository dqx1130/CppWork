#include <stdio.h>
struct student{
    int num;
    char name[20];
    char sex;
    int age;
};
int main(){
    int n;
    scanf("%d",&n);
    struct student stu;
    for(int _ = 0 ; _ < n; _ ++){
        scanf("%d %s %c %d",&stu.num,&stu.name,&stu.sex,&stu.age);
        printf("%d %s %c %d\n",stu.num,stu.name,stu.sex,stu.age);
    }
    return 0;
}