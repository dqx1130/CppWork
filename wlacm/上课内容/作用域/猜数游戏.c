#include <stdio.h>
//time
#include <time.h>
//rand ,srand
#include <stdlib.h>
int MakeRandNum(int a,int b); 
int GuessNum(int x);
int main(){
    // 1~100
    int x = MakeRandNum(1,100); 
    GuessNum(x);
    return 0;
}
int MakeRandNum(int a,int b){
    int x ;
    srand(time(0)); //随机种子生成器，依赖于系统时间
    x = rand() % (b - a + 1) + a;
    return x ;
}
int GuessNum(int x){
    for(;;){
        int t ;
        scanf("%d",&t);
        if (t == x ){
            puts("Yes");
            break;
        }
        if (t > x){
            puts("Big");
        }
        else{
            puts("Small");
        }
    }
}