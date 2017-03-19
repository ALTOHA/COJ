#include <cstdio>
#include <cmath>
using namespace std;

int main(){
	double pisos=0, altura=0, radio=0, pi=acos(0)*2, volumen=0;
	int casos, i, j;
		scanf ("%d", &casos);
		for (i=0; i<casos; i++){
			scanf ("%lf", &pisos);
			for (j=0; j<pisos; j++){
				scanf ("%lf %lf", &radio, &altura);
				volumen=volumen+(radio*radio*altura*pi);
			}
		printf ("%.2lf\n", volumen);
		volumen=0;
		}	
	return 0;
}
