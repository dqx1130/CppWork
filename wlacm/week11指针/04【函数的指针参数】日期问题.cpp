#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void month_day(int,int,int*,int*);
int main()
{   
    int d,m,y,yd;
    while(scanf("%d %d",&y,&yd)!=EOF){
        month_day(y,yd,&m,&d);
        printf("%d-%d\n",m,d);
    }
} 
void month_day(int y,int yd,int *p1,int *p2){
	int a[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};			
	if(y %4 == 0 && (y%100 !=0 || y  % 400 == 0)){
		a[2] = 29;
	} 
	for(int i = 1; i < 13; i++){
		if ( yd > a[i]){
			yd -= a[i];
		}else{
			*p1 = i;
			*p2 = yd;
			break;
		}
	}
}












