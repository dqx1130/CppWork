#include <stdio.h>
void sort(int*,int*);
int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	sort(&a,&b);
	sort(&a,&c);
	sort(&b,&c);
	printf("%d %d %d %d\n",a,b,c); 
}
void sort(int *p1,int *p2){
	int tmp;
	if (*p1 > *p2){
		tmp = *p1;
		*p1 = *p2;
		*p2 = tmp;
	}
}
