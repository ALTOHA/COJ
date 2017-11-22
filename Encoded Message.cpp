#include<bits/stdc++.h>

using namespace std;

int main(){
	int casos, i, pos, l=1, pos2, cont=0;
	char palabra[100000], desen[100000];
	
	scanf("%d", &casos);
	
	while(casos--){
		scanf("%s", palabra);

		pos = sqrt(strlen(palabra));

		
			for(i=0; i<strlen(palabra); i++){
				cont++;
				pos2 = sqrt(strlen(palabra))*(pos-1)+l-1;
				desen[pos2] = palabra[i];
				pos-= 1;
				
				if(cont == sqrt(strlen(palabra))){
					pos = sqrt(strlen(palabra));
					l++;					
					cont = 0;
				}
					
			}
			
		for(i=0; i<strlen(palabra); i++){
			printf("%c", desen[i]);
		}
		printf("\n");

		cont = pos2= 0;
		l = 1;
	}
	
	return 0;
}
