#include <stdio.h>
int calc(int , int , int* , int*);
int main(){
	int h , f;
	while(scanf("%d %d",&h,&f) != EOF){
		int c,r;
		if(calc(h,f,&c,&r)){
			printf("%d %d\n",c,r);
		}else{
			printf("no solution\n");
		}
	}
	return 0;
}

int calc(int h,int f, int *chi , int *rab){
	if(f % 2 != 0){
		return 0;
	} 
	*chi = (4 * h - f )/2;
	*rab = (h - *chi);
	if(*chi < 0 || *rab < 0){
		return 0;
	}
	return 1;
}












