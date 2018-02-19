#include <bits/stdc++.h>

using namespace std;

int main(){
	int num_vacas, total_paginas, paginas, tiempo_maximo, descanso, tiempo = 0, pag, cont = 0;
	
	scanf("%d %d", &total_paginas, &num_vacas);
	
	while(num_vacas--){
		
		tiempo = pag = cont = 0;
		
		scanf("%d %d %d", &paginas, &tiempo_maximo, &descanso);
		
		while(pag < total_paginas){
			pag+=paginas;
			tiempo++;
			
			if(cont == tiempo_maximo)
				cont=0, tiempo+=descanso;

			cont++;
		}
		
		printf("%d\n", tiempo);
	}
	
	return 0;
}
