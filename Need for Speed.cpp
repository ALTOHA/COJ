#include <bits/stdc++.h>

using namespace std;

int main(){
	
	map <int, int> piezas;
	map <int, int> :: iterator it;
	float fuerza, masa, fuerza_piezas[25], masa_piezas[25], FM, max = 0;
	int i, num_piezas, veces = 20, temp;
	
	scanf("%f %f %d", &fuerza, &masa, &num_piezas);
	
	for(i=1; i<=num_piezas; i++)
		scanf("%f %f", &fuerza_piezas[i], &masa_piezas[i]);
	
	
	while(veces--){
		max = 0;
		FM = fuerza/masa;	
		
		for(i=num_piezas; i>=1; i--){
				
			if((fuerza+fuerza_piezas[i]) / (masa+masa_piezas[i])  > max){
				max = (fuerza+fuerza_piezas[i]) / (masa+masa_piezas[i]);
				temp = i;
			}
			
			
		}
		if(max > FM){
			piezas[temp];
			fuerza += fuerza_piezas[temp];
			masa += masa_piezas[temp];
			fuerza_piezas[temp] = masa_piezas[temp] = 0;
		}
		
	}
	if(piezas.size() > 0){
		for(it = piezas.begin(); it!= piezas.end(); it++)
			printf("%d\n", it->first);
	}
	else
		printf("NONE\n");
		
	return 0;
}
