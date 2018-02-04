#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, puntos_referencia, i, tiempo_total;
	double  grados[1005], dif_grados, dif, min = 0.2, total_grados, max; 
	char nombre[100];
	
	scanf("%d", &casos);
	
	while(casos--){
		
		total_grados = 0;
		max = 0;
		
		scanf("%d", &puntos_referencia);
		
		for(i=0; i<puntos_referencia; i++)
			scanf("%s %lf", nombre, &grados[i]);
		
		sort(grados, grados+i);
		
		for(i=1; i<puntos_referencia+1; i++){
			
			if(i == puntos_referencia)
				dif = (grados[0]+360) - grados[puntos_referencia-1];	
			
			else
				dif = grados[i] - grados[i-1];
				
				total_grados+=dif;
				
				if(dif > max)
					max = dif;
		}

		total_grados-=max;
		total_grados = total_grados * min * 60;
		
		
		tiempo_total = total_grados;
		
		if(total_grados - tiempo_total >= .5)
			tiempo_total++;
		
		printf("%d\n", tiempo_total);
		
	}
	return 0;
}
