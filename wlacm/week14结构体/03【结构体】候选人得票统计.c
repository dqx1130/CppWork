#include <stdio.h>
#include <string.h>
struct person{
    char name[20];
    int count;
}leader[3] = {"Li",0,"Zhang",0,"Fun",0};
int main(){
    int n;
    scanf("%d",&n);
    struct person test;
    while(n--){
        char tmp[10];
        scanf("%s",tmp);
        if (strcmp(tmp,"Li") == 0){
            leader[0].count++;
        } else if(strcmp(tmp,"Zhang")==0) {
            leader[1].count++;
        } else if(strcmp(tmp,"Fun") == 0){
            leader[2].count++;
        }
    }
    printf("%s:%d\n",leader[0].name,leader[0].count);
    printf("%s:%d\n",leader[1].name,leader[1].count);
    printf("%s:%d\n",leader[2].name,leader[2].count);
}

