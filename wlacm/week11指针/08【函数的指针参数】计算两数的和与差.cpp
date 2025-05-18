#include <stdio.h>
void sum_diff( float, float, float*, float*);
int main(){
	float a , b , sum ,diff;
	scanf("%f %f",&a,&b);
	sum_diff( a, b, &sum, &diff);
	printf("The sum is %.2f\nThe diff is %.2f\n",sum,diff);
	return 0; 
}
void sum_diff( float a, float b, float *p1, float *p2){
	*p1 = a + b;
	*p2 = a - b;
}
