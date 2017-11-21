#include<bits/stdc++.h>

using namespace std;

int main(){
	int casos, balas, trabajos, recompensa[10000], total=0, distancia, i, cont=0;
	scanf("%d", &casos);
	
	while(casos--){

		scanf("%d %d", &balas, &trabajos);
		
		for(i=0; i<trabajos; i++){
			scanf("%d %d", &recompensa[i], &distancia);
		}
		
		sort(recompensa, recompensa+i);
		
		for(i=trabajos-1; i>=0; i--){
			total+=recompensa[i];
			
			cont++;
			
			if(cont == balas)
				break;
		}
		
		printf("%d\n", total);
		total = cont = 0;

	}
	return 0;
}
