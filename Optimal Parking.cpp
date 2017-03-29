#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	int casos, i, j, arr[100], numero, estacionamiento;
	scanf ("%d", &casos);
		for (i=0; i<casos; i++){
			scanf ("%d", &numero);
				for (j=0; j<numero; j++){
					scanf ("%d", &arr[j]);
				}
				sort(arr, arr+j);
				estacionamiento=(arr[j-1]-arr[0])*2;
				printf ("%d\n", estacionamiento);
				estacionamiento=0;		
		}
	return 0;
}
