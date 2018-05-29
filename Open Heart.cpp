#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, entrada[10005], salida[10005], num_personas, tiempo, i, segundos, min, max;

	scanf("%d", &casos);
	
	while(casos--){
		segundos = 0;
		min = INT_MAX, max =INT_MIN;
		
		scanf("%d", &num_personas);
	
		for(i=0; i<num_personas; i++){
			scanf("%d %d", &entrada[i], &salida[i]);
			
			if(min > entrada[i])
				min = entrada[i];
				
			if(max < salida[i])
				max = salida[i];
		}
		
		tiempo = min;

		while(tiempo <= max){
			for(i=0; i<num_personas; i++){
				if(tiempo >= entrada[i] && tiempo <= salida[i]){
					segundos++;
					break;
				}
			}
			tiempo++;			
		}
		
		printf("%d\n", segundos);		
	}
	
	
	return 0;
}
