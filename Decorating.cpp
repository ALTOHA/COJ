#include <cstdio>
#include <cmath>

using namespace std;

int main(){
	double a, b, cuadrado, radio, triang;
	scanf ("%lf", &a);
	for (int i=0; i<a; i++){
	scanf ("%lf", &radio);
	cuadrado=sqrt(((radio*2)*(radio*2))/2);
	cuadrado=cuadrado*cuadrado;
	b=acos(0)*2;
	triang=(radio*radio)*b;
	printf ("%.2lf\n", triang-cuadrado);
	
	radio=triang=cuadrado=0;
}
	return 0;
}
