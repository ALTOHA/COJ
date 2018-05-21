#include <bits/stdc++.h>

using namespace std;

int main(){
	int cont = 0, temp, i, j;
	char espacio = ' ', cadena[1505];
	scanf("%s", cadena);
	
	for(i=0; i<strlen(cadena); i++){
		temp = cont;
		if(cadena[i] == '}')
			temp-=2;
		
		while(temp--){
			printf("%c", espacio);
		}
		
		if(cadena[i] == '{'){
			printf("{");
			cont+=2;
			
			if(cadena[i+1] == ','){
				printf(",\n");
				i++;
			}
				else printf("\n");	
							
		}
		else if(cadena[i] == '}'){
			printf("}");
			cont-=2;
			
			if(cadena[i+1] == ','){
				printf(",\n");
				i++;
			}
				else printf("\n");	
							
		}
		else{
			for(j=i; j<strlen(cadena); j++){
				if(cadena[j] == ','){
					printf(",\n");
					i = j;
					j = strlen(cadena)+1;
				}
				else if(cadena[j] == '}'){
					i = j-1, j = strlen(cadena)+1;
					printf("\n");
				}
					
				else
					printf("%c", cadena[j]);
			}	
		}
		
	}
	
	
	return 0;
}
