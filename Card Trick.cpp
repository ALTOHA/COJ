#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, tam_cartas, arr[15], carta, pos, carta_temp, i;
	
	scanf("%d", &casos);
	
	while(casos--){
		scanf("%d", &tam_cartas);
		
		if(tam_cartas == 1)
			printf("1\n");
		else{
			fill(arr, arr+15, 0);
			arr[1] = pos = 1;
			carta = 2;
			while(carta != tam_cartas+1){
				
				carta_temp = carta;
				
				for(i=pos; i<tam_cartas; i++){
					if(carta_temp <= 0 && arr[i] == 0){
						arr[i] = carta;
						pos = i;
						break;
					}
					if(carta_temp > 0 && arr[i] == 0){
						carta_temp--;
					}
					if(i == tam_cartas -1)
						i = -1;
	
					
				}
				carta++;
			}
			
			for(i=0; i<tam_cartas; i++)
				printf("%d ", arr[i]);
				
			printf("\n");
		}
	}
	return 0;
}
