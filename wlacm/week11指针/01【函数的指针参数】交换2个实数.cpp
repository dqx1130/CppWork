#include <stdio.h>
void mySwap(double* , double*); 
int main(){
	double a,b;
	while(scanf("%lf %lf",&a,&b) != EOF){
		mySwap(&a,&b);
		printf("%.2f %.2f\n",a,b);
	}
	return 0;
}
void mySwap(double *p1 , double *p2 ){
	 double tmp;
	 tmp = *p1;
	 *p1 = *p2;
	 *p2 = tmp;
}
