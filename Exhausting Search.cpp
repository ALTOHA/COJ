#include <bits/stdc++.h>

using namespace std;

long long int proceso(long long int valor){
	int temp = valor, cont = 1;
	
	if(valor < 10)
		return valor;
	
	else{	
		while(valor > 0){
			if(valor < 10)
				return temp;
				
			if(abs((valor%100 / 10) - (valor%10)) != 1){
				if(cont >= 10){
					return proceso(temp+cont - (temp%(cont)));
				}
				else
					return proceso(temp+cont);
			}
			cont *= 10;
			valor/=10;
		}
	}
}

int main(){
	long long int casos, valor;
	scanf("%lld", &casos);
	
	while(casos--){
		scanf("%lld", &valor);
		printf("%lld\n", proceso(valor+1));
			
	}
	
	return 0;
}
