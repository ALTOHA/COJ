#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, tamano, cont=0, i, d=0, tamano2;
	char torre[10000];
	
	scanf("%d", &casos);
	
	getchar();
	
	while(casos--){
		gets(torre);
		
		tamano=strlen(torre);
		
		if(tamano == 0)
			cont = -10;
			
		d=tamano-1;
		
		tamano2 = tamano;
		
		for(i=0; i<tamano; i++){
			if(torre[i] == ' ' && torre[d] == ' '){
				i++;
				tamano2--;
				d--;
			}
				
			if((torre[i]=='A' || torre[i]=='W' || torre[i] == 'T'|| torre[i] == 'U' || torre[i] == 'I' || torre[i] == 'O' || torre[i] == 'M' || torre[i] == 'X' || torre[i] == 'V' || torre[i] == 'Y' || torre[i] == 'H') && (torre[i] == torre[d]))
				cont++;
				
			else if(torre[i] <= 'A' || torre[i] >= 'Z')
				cont = 0, i = tamano+1;
			
			d--;	
		}
		
		(cont == tamano2) ? printf("YES\n") : printf("NO\n");
		
		
		cont=0;
	}
	return 0;
}
