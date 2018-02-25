#include <bits/stdc++.h>

using namespace std;

int main(){
	bool perfect = true;
	int cuadricula, matriz[50][50], i, j, valor, q, k, val;
	scanf("%d", &cuadricula);
	
	for(i = 0; i<cuadricula; i++){
		for(j=0; j<cuadricula; j++)
			scanf("%d", &matriz[i][j]);
	}
	for(i=0; i<cuadricula; i++){
		for(j=0; j<cuadricula; j++){
			if(matriz[i][j]!=1){
				valor = matriz[i][j];		
				for(k = 0; k<cuadricula; k++){
					for(q = 0; q<cuadricula; q++){
						val = matriz[k][j] + matriz[i][q];
						if(val == valor)
							k = cuadricula, q = cuadricula;	
													
						if(k == cuadricula-1 && q == cuadricula-1){
							perfect = false;
						}
						
					}
				}			
			
			}
		}
	}
	
	(perfect == true) ? printf("Yes\n") : printf("No\n");
	
	
	return 0;
}
