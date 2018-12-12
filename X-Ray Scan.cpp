#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, columnas, filas, cont, i, j;
	char pos[100][100];
	
	scanf("%d", &casos);
	
	while(casos--){
		scanf("%d %d", &filas, &columnas);
		
		for(i=0; i<filas; i++){
			getchar();
			for(j=0; j<columnas; j++)
				scanf("%c", &pos[i][j]);
			
			
		}
		
		
		for(i=0; i<filas; i++){
			cont = 0;
			for(j=0; j<columnas; j++){
				if(pos[i][j] == '1')
					cont++;
			}
			printf("%d", cont);
			
			if(i== filas-1)
				printf("\n");
			else
				printf(" ");
		}
		
		for(j=0; j<columnas; j++){
			cont = 0;
			for(i=0; i<filas; i++){
				
				if(pos[i][j] == '1')
					cont++;
			}
			
			printf("%d", cont);
			
			if(j == columnas-1)
				printf("\n");
			else
				printf(" ");		
		
		}
		
	}
	
	return 0;
}
