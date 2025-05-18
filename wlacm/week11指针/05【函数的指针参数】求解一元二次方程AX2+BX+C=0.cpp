#include <stdio.h>
#include <math.h>
void solve(int a, int b,int c,float *x1,float *x2);
int main() 
{ 
    int a,b,c; 
    float x1,x2; 
    scanf("%d %d %d",&a,&b,&c); 
    solve(a,b,c,&x1,&x2); 
    printf("%f %f\n",x1,x2); 
}
void solve(int a, int b,int c,float *x1,float *x2){
	float d = b * b - 4 * a * c;
	if ( d >= 0 ){
		*x1 = (-b + sqrt(d)) / (2.0 * a) ;
		*x2 = (-b - sqrt(d)) / (2.0 * a) ;
	} 
	else{
		*x1 = *x2 = 0.0;
	}
}
