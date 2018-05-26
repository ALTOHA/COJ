#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, estampas_verdes, num_personas, azul[10000], suma ,i, cont, cont2 = 1;
	
	scanf("%d", &casos);
	
	while(casos--){
		suma = cont = 0;
		
		scanf("%d %d", &estampas_verdes, &num_personas);
		
		for(i = 0; i<num_personas; i++){
			scanf("%d", &azul[i]);
		}
		
		sort(azul, azul+i);
		
		for(i=num_personas-1; i>=0; i--){
			if(suma <= estampas_verdes){
				suma+=azul[i];
				cont++;
			}
			else{
				break;
			}
		}
		
		printf("Scenario #%d:\n", cont2);
		(suma >= estampas_verdes) ? printf("%d\n",cont) : printf("impossible\n");
	
		cont2++;
	}
	return 0;
}
