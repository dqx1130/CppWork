#include <stdio.h>
void move(int n ,char a,char b, char c);
int main(){
    int n = 3;
    move(n,'A','B','C');
    return 0;
}
void move(int n ,char a,char b, char c){
    //递归出口
    if (n == 0){
        return;
    }
    //move(n个盘子，起始柱，剩下的那个柱子（要借用的），目标柱)
    //1.上面的，A到B
    move(n-1,a,c,b);
    //2.下面的，A到C
    // move(n-1,a,b,c);
    printf("Move 第%d步,form %c to %c \n  ",n,a,c);
    //3.上面的，B到C
    move(n-1,b,a,c);
}   