#include <stdio.h>
typedef struct {
    int num;
    int score;
} Stu;
int main(){
    Stu arr[60];
    int i = 0;
    while(scanf("%d %d",&arr[i].num,&arr[i].score) != EOF){
        i++;
    }
    int j ;
    for(j = i - 1; j >= 0 ; j--){
        printf("%d %3d\n",arr[j].num,arr[j].score);
    }
    return 0;
}
