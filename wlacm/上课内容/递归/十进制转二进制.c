#include <stdio.h>
void decToBin(int);
int main()
{
    int x;
    while(scanf("%d",&x) != EOF){
        decToBin(x);
        printf("\n");
    }
    return 0;
}
void decToBin(int x){
    if (x == 0){
        printf("0");
        return;
    }
    if (x < 0){
        printf("-");
        x = -x;
    }
    if (x > 0){
        decToBin(x/2);
        printf("%d",x%2);
    }
}