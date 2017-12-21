#include <bits/stdc++.h>

using namespace std;

int main(){
	int cantidad_lista, lista[10000], valores, i, checa, valor_minimo, j;
	
	scanf("%d", &cantidad_lista);
	
	for(i=0; i<cantidad_lista; i++){
		scanf("%d", &lista[i]);
	}
	sort(lista, lista+i);
	
	scanf("%d %d", &checa, &valor_minimo);
	
	for(i=0; i<checa; i++){
		scanf("%d", &valores);
		
		for(j=0; j<cantidad_lista; j++){
		
			if(valores == lista[j])
				printf(":)\n"), j=cantidad_lista;
		
			else if(j == cantidad_lista-1)
				printf(":(\n");
		
		}
	}
	
	for(i=0; i<valor_minimo; i++){
		scanf("%d", &valores);
		
		printf("%d\n", lista[valores-1]);
	}
	
	return 0;
}
