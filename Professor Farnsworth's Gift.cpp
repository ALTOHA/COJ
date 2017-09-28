#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, i, tamano, cont=0, cero=0;
	char numero[20];
	
	scanf("%d", &casos);
	
	while(casos--){
		scanf("%s", numero);
		
		tamano = strlen(numero);
		
		sort(numero, numero+tamano);
		if(numero[0] == '0' && tamano == 1)
			printf("0");
			
		else if(numero[0]!='-'){
			
			for(i=0; i<tamano; i++){
			
				if (numero[i] == '0')
					cero++;
				
				else if(numero[i]!='0'){
					printf("%c", numero[i]);
					
					while(cero!=0)
						printf("0"), cero--;
				}
			}
		}
		else{
			printf("%c", numero[0]);
			
			for(i=tamano-1; i>=1; i--){
				printf("%c", numero[i]);
			}
		}
			printf("\n");
			cont = cero= 0;
	}
	return 0;
}
