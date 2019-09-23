#include <bits/stdc++.h>

using namespace std;

int pesomax[505], DP[45005];


int proceso(int vacas, int peso){
	if(vacas < 0)
		return 0;
	
	if(pesomax[vacas] > peso)
		return proceso(vacas-1, peso);
	
	if(DP[peso] != -1)
		return DP[peso];
	
	return 	DP[peso] = max(proceso(vacas-1, peso), proceso(vacas-1, peso-pesomax[vacas]) + pesomax[vacas]);
}

int main(){
	int peso, num_vacas, i;
	
	scanf("%d %d", &peso, &num_vacas);
	
	for(i=0; i<num_vacas; i++){
		scanf("%d", &pesomax[i]);
	}
	
	for(i=0; i<=peso; i++){
		DP[i] = -1;
	}	
	
	printf("%d\n", proceso(num_vacas-1, peso));
	
	return 0;
}
