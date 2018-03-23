#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, i, j, primos[500505], suma = 0, limite1, limite2, posicion, cont1, cont2;
	
	fill(primos, primos+500505, 0);
	
	for(i=2; i<=500505; i++){
		
		if(primos[i] == 0){
			primos[i] = 1;
		
			for(j=i*2; j<=500505; j+=i){
				primos[j] = 2;
			}
		}
	}
	
	scanf("%d", &casos);
	
	while(casos--){
		scanf("%d", &posicion);
		
		limite1 = limite2 = 1;
		cont1 = 1, cont2 = 2;
		suma = 0, posicion--;
		
		
		while(posicion--){
			
			limite1 += cont1, limite2 += cont2;
			cont1++, cont2++;
			
		}
		for(i=limite1; i<=limite2; i++){
			if(primos[i] == 1)
				suma += i;
		}
		
		printf("%d\n", suma);
	}
	
	
	return 0;
}
