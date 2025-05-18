#include <stdio.h>
void decToBin(int);
int main(){
    int x;
    while(scanf("%d",&x) != EOF ){
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

    int j = 0;
    if (x < 0){
        j = 1;
        x = -x;
    }

    char res[32];
    int i = 0;
    while (x > 0){
        if (x % 2 == 0){
            res[i] = '0';
        }else{
            res[i] = '1';
        }
        i++;
        x = x / 2;
    }

    if (j == 1){
        res[i] = '-';
        i ++;
    }
    for( int k = i - 1; k >= 0; k --){
        printf("%c",res[k]);
    }
}