#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, valor, arr[4], i, monedas[4], cont = 1;
	
	arr[0] = 1;
	arr[1] = 3;
	arr[2] = 9;
	arr[3] = 27;
	
	scanf("%d", &casos);
	
	while(casos--){
		fill(monedas, monedas+4, 0);		
		
		scanf("%d", &valor);
		
		for(i=3; i>=0; i--){
			if(valor >= arr[i])
				monedas[i] = valor/arr[i], valor-=(arr[i] * monedas[i]);
		}
		
		printf("Case #%d: %d Coppers %d Triads %d Nonas %d Cubics\n", cont, monedas[0], monedas[1], monedas[2], monedas[3]);
		cont++;
	}
	
	return 0;
}
