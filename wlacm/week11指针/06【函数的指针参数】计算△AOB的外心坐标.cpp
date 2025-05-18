#include <stdio.h>
void p(int x1, int y1,int x2, int y2, float *x,float *y); 
int main() 
{ 
    int x1,y1,x2,y2; 
    float x,y; 
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    p(x1,y1,x2,y2,&x,&y); 
    printf("%.1f %.1f\n",x,y); 
}
void p(int x1, int y1,int x2, int y2, float *x,float *y){
	float d1 , d2 , fm;
	int x3 = 0 , y3 = 0;
	d1 = (x2 * x2 + y2 * y2) - (x1 * x1 + y1 * y1);
	d2 = (x3 * x3 + y3 * y3) - (x2 * x2 + y2 * y2);
	fm = 2 * ((y3 - y2)*(x2-x1) - (y2 - y1)*(x3 - x2));
	*x = ((y3 - y2) * d1 - (y2 - y1) * d2 ) / fm;
	*y = ((x2 - x1) * d2 - (x3 - x2) * d1 ) / fm;
}
