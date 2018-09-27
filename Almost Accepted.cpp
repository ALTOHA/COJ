#include <bits/stdc++.h>

using namespace std;

int main(){
	bool presen = false;
	char respuesta_correcta[10000], respuesta_dada[10000];
	int i, j;
	
	gets(respuesta_correcta);
	gets(respuesta_dada);
	
	
	for(i=0, j = 0; i<max(strlen(respuesta_correcta), strlen(respuesta_dada)); i++, j++){
		if(respuesta_dada[j] == ' '){
			
			if(respuesta_correcta[j] != ' ')
				presen = true;
				
			while(respuesta_dada[j] == ' '){
				j++;
			}
		}
		
		if(respuesta_correcta[i] == ' '){
			if(respuesta_dada[i] != ' ')
				presen = true;			
			
			while(respuesta_correcta[i] == ' '){
				i++;
			}
		}
	
		if(respuesta_correcta[i] != respuesta_dada[j]){
			printf("Wrong Answer\n");
			break;
		}
		
		if(i == max(strlen(respuesta_correcta), strlen(respuesta_dada)) - 1){
			(presen == true) ? printf("Presentation Error\n") : printf("Accepted\n");
		}	
		
	}
	
	return 0;
}
