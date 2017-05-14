#include <cstdio>
#include <cmath>

using namespace std;

int main(){
	float aceleracion1, aceleracion2, distancia, tiempo, actotal;
	int casos, i=1;
	scanf ("%d", &casos);
		while (casos--){
			scanf ("%f %f %f", &distancia, &aceleracion1, &aceleracion2);
				if (aceleracion1>aceleracion2){
				actotal = aceleracion1 - aceleracion2;
				tiempo = sqrt((distancia*2)/actotal);
				printf ("Case #%d: %.2f\n",i, tiempo);
			}
			else printf ("Case #%d: impossible\n", i);
			
			i++;
		}   
	return 0;
}
