#include <cstdio>

using namespace std;

int main(){
	int casos, pasos, puntos=0, mitad, x=0, i, j;
	scanf ("%d", &casos);
		for(i=0; i<casos; i++){
			scanf ("%d", &pasos);
			mitad=pasos+(pasos-1);
			x=mitad-2;
				for (j=0; j<pasos-1; j++){
					puntos=puntos+x;
					x=x-2;
				}
				puntos=puntos*2;
				puntos=puntos+mitad;
				printf ("%d\n", puntos);
				x=puntos=mitad=0;
		} 
	return 0;
}
