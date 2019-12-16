#include <bits/stdc++.h>

using namespace std;

long long int respuesta[1000005];

int main(){
	long long int casos, i, invitados;
	
	respuesta[0] = 1;
	
	for(i=1; i<1000000; i++){
		respuesta[i] = respuesta[i-1] +i+1;
	}
	
	scanf("%lld", &casos);
	
	while(casos--){
		scanf("%lld", &invitados);
		
		printf("%lld\n", respuesta[invitados]);
	}
	
	return 0;
}
