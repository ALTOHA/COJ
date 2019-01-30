#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, lista[105], i, tam, valor, cont = 1;
	
	scanf("%d", &casos);
	
	while(casos--){
		scanf("%d", &tam);
		fill(lista, lista+tam+1,  0);
		
		for(i=0; i<tam; i++){
			scanf("%d", &valor);
			lista[valor]++;
		}
			
		for(i=tam; i>=0; i--){
			if(i == lista[i]){
				printf("Case #%d: %d\n",cont, i);
				break;
			}
		}
		cont++;
	}
	return 0;
}
