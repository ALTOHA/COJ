#include <cstdio>

using namespace std;

int main(){
	int casos, i;
	float largo, ancho, area;
		scanf ("%d", &casos);
			for(i=0; i<casos; i++){
				scanf ("%f %f", &ancho, &largo);
				area=(((largo/2)*(ancho/2))/2+((ancho/2)*(largo/4))/2);
				printf ("%.8f\n", area);
				area=0;
			} 
	return 0;
}
