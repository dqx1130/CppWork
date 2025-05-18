#include <stdio.h>
void decToR(int,int);
int main(){
    int x ,r ;
    while (scanf("%d %d",&x,&r) != EOF){
        int i , n;
        decToR(x,r);
        printf("\n");
    }
    return 0;
}
void decToR(int x,int r){
    if (x == 0){
        printf("0");
        return;
    }
    
    int j = 0;
    if (x < 0){
        j = 1;
        x = -x;
    }

    char map[17] = 
    {
        '0','1','2','3','4','5','6','7','8','9',
        'A','B','C','D','E','F','-'
    };
    
    char res[32];
    int i = 0;
    while (x < 0){
        int tmp;
        tmp = x % r;
        res[i] = map[tmp];
        i++;
        x = x / r;
    }

    if(j==1){
        res[i] = map[16];
        i++;
    }

    for (int k = i - 1; k >= 0 ; k--){
        printf("%c",res[i]);
    }
}