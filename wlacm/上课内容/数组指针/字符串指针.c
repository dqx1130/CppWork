#include <stdio.h>
#include <string.h> //strcmp strcat .strcpy strlen

int main(){
    char *sp = "hello c";
    puts(sp);
    printf("%s\n",sp);
    printf("\n sp = %X \n ",sp);
    for(;*sp; sp++){ //*sp != '\0'
        putchar(*sp);
    }
    printf("\n sp = %X \n ",sp);
    return 0;
} 