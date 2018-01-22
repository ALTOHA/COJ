#include <bits/stdc++.h>

using namespace std;

int main(){
	int columnas, bote_inicial = 1, bote_final, ancho_bote, num_manzanas, manzana, pasos = 0;
	
	scanf("%d %d %d", &columnas, &ancho_bote, &num_manzanas);
	bote_final = ancho_bote;	
	
	while(num_manzanas--){
		scanf("%d", &manzana);
	
		if(manzana > bote_final){
			pasos += (manzana-bote_final);
			bote_final = manzana;
			bote_inicial = manzana+1 - ancho_bote;  
		}	
		
		else if(manzana < bote_inicial){
			pasos += bote_inicial - manzana;
			bote_inicial = manzana;
			bote_final = manzana+ ancho_bote-1;
		}
	}
	
	printf("%d\n", pasos);
	
	return 0;
}
