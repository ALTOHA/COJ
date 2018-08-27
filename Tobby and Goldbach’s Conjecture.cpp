#include <bits/stdc++.h>

using namespace std;

int main(){
	map <int, int> primos;
	int casos, i, j, pri[450] = {0}, cont, valor;
	
	
	for(i=2; i<=400; i++){
		
		if(pri[i] == 0){

			pri[i] = 1;
			primos[i];

			for(j=i*2; j<=400; j+=i){
				pri[j] = 2;
			}	
		}

	}
	
	scanf("%d", &casos);
	
	while(casos--){
		cont = 0;
		scanf("%d", &valor);
		
		for(i=2; i<=valor/2; i++){
			if(primos.count(i) > 0 && primos.count(valor-i))
				cont++;
			
			
		}
		
		printf("%d\n", cont);
	}
	
	return 0;
}
