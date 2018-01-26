#include <bits/stdc++.h>

using namespace std;

int main(){
	int numero, i, suma=0, num, sumanumero=0, respuesta;
	
	while(scanf("%d", &numero) && numero != 0){

		num = numero;		
		while(num > 0){
			sumanumero+=num%10;
			num/=10;
		}

		for(i=11; i<1000000; i++){
			num = numero*i;
			
			while(num > 0){
				suma+=num%10;
				num/=10;
			}
			if(sumanumero  == suma)
				respuesta = i, i = 1000000;
				
			suma = 0;
		}
		
		printf("%d\n", respuesta);
		sumanumero = suma = 0;
	}
	
	return 0;
}
