#include<stdio.h> 
void max_min(int s[], int n, int *a, int *b);
int main() 
{ 
    int s[10],n=0; 
    int a,b; 
    while( scanf("%d",&s[n]) == 1 ){
        n++;
    } 
    max_min(s,n,&a,&b); 
    printf("%d %d",a,b); 
}

void max_min(int s[], int n, int *a, int *b){
    *a = s[0];
    *b = s[0];
    *s++;
    n--;
    while(n--){
        if (*s < *a){
            *a = *s;
        }
        if (*s > *b){
            *b = *s;
        }
        *s++;
    }
}