#include <cstdio>
#include <cmath>
using namespace std;

int main(){
	float pi=3.141592654, longitud, area1, radio, apotema, frijol, arroz;
	int i, j, casos;
		scanf ("%d", &casos);
		for (i=0; i<casos;i++){
				scanf ("%f", &longitud);
				radio=longitud/(2*pi);
				apotema=sqrt((radio*radio)-(radio/2)*(radio/2));
					area1=(apotema*radio*6)/2;
						arroz=((radio+radio*1.5)*apotema)/2;
						frijol=area1-arroz;
					printf ("Case %d\n", i+1);
				printf ("Rice: %.2f\n", arroz);
			printf ("Beans: %.2f\n", frijol);
			
		}
	return 0;
}
