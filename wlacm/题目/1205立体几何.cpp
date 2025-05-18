#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
	double r , h ,C1,Sa,Sb,Va,Vb,PI;
	PI = 3.14;
	cin >> r ;
	cin >> h ;
	C1 = 2 * r * PI;
	Sa = PI * pow(r,2);
	Sb = 4 * PI * pow(r,2);
	Va = (4.0 /3) * PI * pow(r,3);
	Vb = Sa * h;
//	cout << "C1=" << fixed << setprecision(2) << C1 <<endl;
//	cout << "Sa=" << fixed << setprecision(2) << Sa <<endl;
//	cout << "Sb=" << fixed << setprecision(2) << Sb <<endl;
//	cout << "Va=" << fixed << setprecision(2) << Va <<endl;
//	cout << "Vb=" << fixed << setprecision(2) << Vb <<endl;
	printf("C1=%.2lf",C1);
	printf("Sa=%.2lf",Sa);
	printf("Sb=%.2lf",Sb);
	printf("Va=%.2lf",Va);
	printf("Vb=%.2lf",Vb); 
	return 0;
}

