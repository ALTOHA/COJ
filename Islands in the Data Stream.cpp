#include <bits/stdc++.h>

using namespace std;

int main(){
	bool comp = false;
	int casos, arr[15], j, cont = 0, valor = 0, inicio = 0, numero;
	
	scanf("%d", &casos);
	
	while(casos--){
		scanf("%d", &numero);
		
		for(j=0; j<15; j++){
			scanf("%d", &arr[j]);
			
			if(valor > arr[j]){
				valor = arr[j];
				cont ++;
				
				if(comp == false){
					comp = true;
					inicio = valor;
				}
		
			}
			
			if(inicio <= arr[j]){
				valor = arr[j];
				comp = true;
			}
		
		}
		
		printf("%d %d\n", numero, cont);
		cont = 0;
	}
	
	return 0;
}
