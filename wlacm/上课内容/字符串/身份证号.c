#include <stdio.h>
int main() {
    int T;
    scanf("%d",&T);
    while(T--){
        char id[19];
        scanf("%18s",id);
        int code = id[16] - '0';
        printf("%s\n", (code % 2 == 0) ? "loli" : "shota");
    }
    return 0;
}