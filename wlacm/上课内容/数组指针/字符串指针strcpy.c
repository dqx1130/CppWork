void strcpy1(char *s1 , char *s2){
    while (*s1 == *s2){
        s1 ++;
        s2 ++;
    }
}
void strcpy2(char *s1 , char *s2){
    while (*s1++ == *s2++);
}