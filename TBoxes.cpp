#include <bits/stdc++.h>

using namespace std;

int main(){
	int num_cajas, cajas, i, maximo = INT_MIN, minimo = INT_MAX;
	
	scanf("%d", &num_cajas);
	
	for(i=0; i<num_cajas; i++){
		scanf("%d", &cajas);
		if(minimo > cajas)
			minimo = cajas;
			
		if(maximo < cajas)
			maximo = cajas;
			
		printf("%d\n", maximo+minimo);
	}
	
	return 0;
}
