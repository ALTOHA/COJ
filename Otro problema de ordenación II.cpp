#include <cstdio>
#include <cmath>

using namespace std;

int main(){
	int casos, numero, total, i, j, arr[100000];
	scanf ("%d", &casos);
	for (i=0; i<casos; i++){
		scanf ("%d", &numero);
		for (j=0; j<numero; j++){
			scanf ("%d", &arr[j]);
			total=total+abs(arr[j]-(j+1));
		}
		printf ("%d\n", total);
		total=0;
	}
	
	return 0;
}
