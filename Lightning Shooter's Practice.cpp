#include <bits/stdc++.h>

using namespace std;

int main(){
	int num_latas, tiros, matriz[500][500], i, j, x, y, izq, der, izquierda2, lado1, cont = 0;

	scanf("%d %d",&num_latas, &tiros);
	
	izq = der = num_latas;
	for(i=1; i<=num_latas; i++){
		if(izq == der)
			matriz[izq][i] = 1;
		else{
			
			izquierda2 = izq;
			
			while(izquierda2 != der){
				matriz[izquierda2][i] = 1;
				izquierda2+=2;
			}
			matriz[der][i] = 1;
		}
		izq--, der++;
	}
	
	while(tiros--){
		scanf("%d %d", &x, &y);
		y = num_latas-y+1;
		cont = 0;
		if(matriz[x][y] == 1){
			cont++;
			matriz[x][y] = 2;
			
			for(i = num_latas; i>= 1; i--){
				for(j=1; j<=(num_latas*2)-1; j++){
					if(matriz[j][i] == 2){
						if(matriz[j-1][i-1] == 1)
							matriz[j-1][i-1] = 2, cont++;
						if(matriz[j+1][i-1] == 1)
							matriz[j+1][i-1]=2, cont++;
					}
				}
			}
			printf("%d\n", cont);
		}
		else
			printf("0\n");
	}

	for(i=1; i<=num_latas; i++){
		for(j = 1; j<=(num_latas*2)-1; j++){
			if(matriz[j][i] == 2)
				printf("X");
			else	
				printf("%d", matriz[j][i]);
		}
		printf("\n");
	}		
	return 0;
}
