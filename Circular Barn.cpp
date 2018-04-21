#include <bits/stdc++.h>

using namespace std;

int main(){
	int num_habitaciones, vacas[1005], i, j, minimo = INT_MAX, total_vacas = 0, tot, cont, pasos, dif;
	
	scanf("%d", &num_habitaciones);
	
	for(i=1; i<=num_habitaciones; i++){
		scanf("%d", &vacas[i]);
		total_vacas += vacas[i];
	}
	
	
	for(i=1; i<=num_habitaciones; i++){
		
		cont = 1;
		pasos = 0;
		tot = total_vacas;		
		
		for(j=i; j <= num_habitaciones; j++){
		
			dif = tot - vacas[j];
			tot -= vacas[j];
			pasos += dif;
			cont++;
			
			if(j==num_habitaciones && cont < num_habitaciones)
				j = 0;
				
			if(cont == num_habitaciones)
				j = num_habitaciones+1;
						
		}

		
		if(pasos < minimo)
			minimo = pasos;
	}
	
	printf("%d\n", minimo);
	return 0;
}
