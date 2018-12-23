#include <bits/stdc++.h>

using namespace std;


int main(){
	long long int num_total, numeros, suma = 0, suma_esperada;
	
	scanf("%lld", &num_total);
	
	suma_esperada = ((1+num_total) * num_total) / 2;
	
	num_total--;
	
	while((num_total)--){
		scanf("%lld", &numeros);
		suma+=numeros;
		
	}
	printf("%lld\n", abs(suma_esperada-suma));
	
	return 0;
}
