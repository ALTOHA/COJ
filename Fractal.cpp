#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int casos, tamano_inicial, tamano_maximo, cont=0, valor, division = 3;
	
	scanf("%lld", &casos);
	
	while(casos--){
		scanf("%lld %lld", &tamano_inicial, &tamano_maximo);;
		valor = tamano_inicial;
		
		while(valor < tamano_maximo){
			
			valor=(tamano_inicial*5) / division;
			tamano_inicial*=5, division*=3;
			cont ++;
		
		}
		
		(cont == 0) ? printf("%lld\n", cont) : printf("%lld\n", cont-1);
		
		cont = 0;
		division = 3;
	}
	
	return 0;
}
