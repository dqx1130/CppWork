#include <stdio.h>
void hanoi(int n,char a , char b , char c);
int main(){
    hanoi(3,'A','B','C');
    return 0;
}
//全局变量
int cnt = 0;
void hanoi(int n , char a, char b , char c){
    if (n == 0){
        return;
    }
    hanoi(n-1,a,c,b);
    cnt ++ ;
    printf("%4d : #%d move %c -> %c \n",cnt,n,a,b);

    hanoi(n-1,c,b,a);
}
