#include <bits/stdc++.h>

using namespace std;

int main(){
	map <string, int> grupos;
	char nombre1[100], nombre2[100], nombre3[100];
	int i, max = 0, casos, cont1, cont2, cont3;
	
	scanf("%d", &casos);
	
	while(casos--){
		cont1 = cont2 = cont3 = 0;
		
		scanf("%s %s %s", nombre1, nombre2, nombre3);
		
		for(i=0; i<strlen(nombre1); i++)
			cont1+= nombre1[i] - '0';
			
		for(i=0; i<strlen(nombre2); i++)
			cont2+= nombre2[i] - '0';
					
		for(i=0; i<strlen(nombre3); i++)
			cont3+= nombre3[i] - '0';	
			
		if(cont1 < cont2 && cont1 < cont3){			
			if(cont2 < cont3){
				strcat(nombre1, nombre2);
				strcat(nombre1, nombre3);
				grupos[nombre1]++;	
				
				if(grupos.at(nombre1) > max)
					max = grupos.at(nombre1);
						
			}
			else{
				strcat(nombre1, nombre3);
				strcat(nombre1, nombre2);
				grupos[nombre1]++;
				
				if(grupos.at(nombre1) > max)
					max = grupos.at(nombre1);								
			}
				
		}	
		else if(cont2 < cont3 && cont2 < cont1){
			if(cont1 < cont3){
				strcat(nombre2, nombre1);
				strcat(nombre2, nombre3);
				grupos[nombre2]++;
				
				if(grupos.at(nombre2) > max)
					max = grupos.at(nombre2);				
			}
			else{
				strcat(nombre2, nombre3);
				strcat(nombre2, nombre1);
				grupos[nombre2]++;	
				
				if(grupos.at(nombre2) > max)
					max = grupos.at(nombre2);							
			}			
		}
		else{
			if(cont1 < cont2){
				strcat(nombre3, nombre1);
				strcat(nombre3, nombre2);
				grupos[nombre3]++;
				
				if(grupos.at(nombre3) > max)
					max = grupos.at(nombre3);								
			}
			else{
				strcat(nombre3, nombre2);
				strcat(nombre3, nombre1);
				grupos[nombre3]++;
				
				if(grupos.at(nombre3) > max)
					max = grupos.at(nombre3);								
			}			
		}		
				
	}

	printf("%d\n", max);
	
	return 0;
}
