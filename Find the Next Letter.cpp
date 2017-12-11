#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, tamano, pos=0;
	char palabra[100000];
	
	scanf("%d", &casos);
	
	while(casos--){
		fill(palabra, palabra+100000, 0);
		
		scanf("%d %s", &tamano, palabra);	
		
		if(tamano!=1){
			
			for(int i=0; i<tamano-1; i++){
				for(int j=i; j<tamano; j++){
					
					if(i != tamano-1){
						
						if(palabra[i] < palabra[j])
							printf("%d ", j+1), j=tamano;
						
						else if(j == tamano-1)
							printf("-1 ");
								
					}
				
				}
			}
				printf("-1\n");
		}
		else printf("-1\n");
	}
	
	return 0;
}
