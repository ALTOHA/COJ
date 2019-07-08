#include <bits/stdc++.h>

using namespace std;

int main(){
	map <string, int> lista;
	bool entra;
	int num_nombres, espacio, cont = 0, i, cont2, j, pos;
	char nombres[1000], temp[100];
	
	scanf("%d", &num_nombres);
	getchar();
	
	printf("Lista de Usuarios del Congreso FEU:\n");
	
	while(num_nombres--){
		fill(temp, temp+100, 0);		
		espacio = 0, cont++;
		entra = false;
		
		gets(nombres);
		
		for(i=0; i<strlen(nombres); i++){
			if(nombres[i] == ' ')
				espacio++;
		}
		
		temp[0] = tolower(nombres[0]);
		
		if(espacio == 3){
			for(i=1; i<strlen(nombres); i++){
				
				if(nombres[i] == ' ' && entra == false){
					entra = true;
					pos = i+1;
					temp[1] = tolower(nombres[i+1]);
				}
				
				
				else if(nombres[i] == ' ' && entra == true){
					cont2 = 2;
					for(j=i+1; j<strlen(nombres); j++){
						if(nombres[j] == ' ')
							break;
							
						temp[cont2] = tolower(nombres[j]);
						cont2++;
					}
					
					if(lista.count(temp) > 0){
						fill(temp, temp+100, 0);
						temp[0] = tolower(nombres[0]);
						temp[1] = tolower(nombres[pos]);
					}
					else{
						lista[temp];
						break;
					}					
					
				}
				
			}			
		}
		else{
			for(i=1; i<strlen(nombres); i++){
				if(nombres[i] == ' '){
					cont2 = 1;
					for(j=i+1; j<strlen(nombres); j++){
						if(nombres[j] == ' ')
							break;
							
						temp[cont2] = tolower(nombres[j]);
						cont2++;
					}
					
					if(lista.count(temp) > 0){
						fill(temp, temp+100, 0);
						temp[0] = tolower(nombres[0]);
					}
					else{
						lista[temp];
						break;
					}					
					
				}
				
			}
		}
		printf("user%d: %s\n", cont, temp);
			
	}
	
	return 0;
}
