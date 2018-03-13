#include <bits/stdc++.h>

using namespace std;

int main(){
	int num_semaforos, distancia, semaforos[105], rojo, verde, tiempo = 0, i=0, ti_semaforo;
	
	scanf("%d %d", &num_semaforos, &distancia);
	
	while(num_semaforos--){
		scanf("%d %d %d", &semaforos[i], &rojo, &verde);
		
		if(i == 0)
			tiempo += semaforos[i];
		else
			tiempo += semaforos[i]-semaforos[i-1];
		
		ti_semaforo = tiempo;	
		
		i++;
		
		while(ti_semaforo >= 0){
			ti_semaforo -= rojo;
			if(ti_semaforo < 0)
				tiempo+= -(ti_semaforo); 		
			
			ti_semaforo -= verde;
			
		}
	}
	tiempo += distancia-semaforos[i-1];
	printf("%d\n", tiempo);
	
	return 0;
}
