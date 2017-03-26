#include <cstdio>

using namespace std;

int main(){
	int casos, pasajeros=1, j, i, paradas;
	scanf ("%d", &casos);
	for (i=0; i<casos; i++){
		scanf ("%d", &paradas);
			for (j=0; j<paradas-1; j++){
				pasajeros=(pasajeros*2+1);
			}
		printf ("%d\n", pasajeros);
		pasajeros=1;
	}
	
	return 0;
}
