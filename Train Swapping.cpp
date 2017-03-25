#include <cstdio>

using namespace std;

int main(){
	int i, arr[10000], casos, numeros, j, valor, cont=0, q;
	scanf ("%d", &casos);
		for (i=0; i<casos; i++){
		scanf ("%d", &numeros);
			for (j=0; j<numeros; j++){
				scanf ("%d", &arr[j]);
			}
			for (j=0; j<numeros; j++){
				for (q=j+1; q<numeros; q++){
					if (arr[j]>arr[q])
					cont++;
				}		
			}
			printf ("Optimal train swapping takes %d swaps.\n", cont);
			cont=0;
		}
	
	return 0;
}
