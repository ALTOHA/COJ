#include <bits/stdc++.h>

using namespace std;

int arr[10000000] = {0};

int main(){
	vector <int> primes;
	int casos, lim_inf, lim_sup, digito, i, j, valor, checa;
	long long int cont = 0;
	
	primes.push_back(1);
	
	for(i=2; i<10000000; i++){
		
		if(arr[i] == 0){
			arr[i] = 1;
			primes.push_back(i);
			
			for(j=i*2; j<10000000; j+=i){
				arr[j] = 1;
			}
		}
	}
	
	scanf("%d", &casos);
	
	while(casos--){
		cont = 0;
		scanf("%d %d %d", &lim_inf, &lim_sup, &digito);
		
		for(i=0; i<=lim_sup; i++){
			if(primes[i] >= lim_inf && primes[i]<=lim_sup){
				valor = primes[i];
				
				while(valor > 0){
					checa = valor%10;
					if(checa == digito)
						cont++, valor = 0;
					
					valor/=10;
				}
			}
			if(primes[i] > lim_sup || primes[i] == 9999991)
				break;
		}
		
		printf("%lld\n", cont);
	}
	
	return 0;
}
