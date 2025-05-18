#include <stdio.h>
#include <string.h>
int judge(int k ){
    char str[20];
    sprintf(str,"%d",k);
    for(int i = 0;i < strlen(str);i++){
        if( str[i] == '7'){
            return 1;
        }
    }
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    int count = 0;
    for(int k = 1 ; k <= n ; k ++){
        if( k % 7 != 0 && judge(k) == 0){
            printf("%4d",k);
            count ++ ;
            if(count % 15 == 0){
                printf("\n");
            }
        }
    }
    return 0;
}