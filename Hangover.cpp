#include <bits/stdc++.h>

using namespace std;

int main(){
	int cont = 0;
	float numero, valor=0, n=2;
	
	while(scanf("%f", &numero) && numero != 0){
		while(numero > valor){
			valor+=(1/n);
			n++;
			cont ++;
		}
		
		printf("%d card(s)\n", cont);
		n = 2, cont = valor = 0;	
	} 
	
	return 0;
}
