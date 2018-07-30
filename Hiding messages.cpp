#include <bits/stdc++.h>

using namespace std;

int main(){
	char mensaje[10000];
	int casos, num_lineas, cambio, i, valor;
	
	scanf("%d", &casos);
	
	while(casos--){
		scanf("%d %d", &num_lineas, &cambio);
		
		getchar();
		while(num_lineas--){
			
			gets(mensaje);
			
			for(i=0; i<strlen(mensaje); i++){
			
				if(mensaje[i] >= 'A' && mensaje[i] <= 'Z'){
					while(cambio > 26)
						cambio-=26;
					valor = cambio+mensaje[i];
					
					if(valor > 90){
						valor = cambio+mensaje[i] - 91 + 65;
					}
					
					printf("%c", valor);
				}
			
				else
					printf("%c", mensaje[i]);
			}
			
			printf("\n");
		}
			
	}
	
	return 0;
}
