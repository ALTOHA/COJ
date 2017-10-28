#include <bits/stdc++.h>

using namespace std;

int main(){
	int numero, i, cont = 0, maximo = 10, minimo = 0;
	char stan[10];
	
	while(scanf("%d", &numero) && numero!=0){
		getchar();
		gets(stan);
		if(stan[4] == 'h'){
			
			if(numero <= maximo)
				maximo = numero - 1;
		}
		else if(stan[4] == 'l'){
			
			if(numero >= minimo)
				minimo = numero + 1;
		}	
		else{
				for(i = minimo; i<=maximo; i++){
					
					if(numero == i)
						cont = 1, i = maximo + 1;
				}
			(cont == 1) ? printf("Stan may be honest\n") : printf("Stan is dishonest\n");
			
			cont = 0;
			maximo = 10, minimo = 0;		
		}
	}
	
	return 0;
}
