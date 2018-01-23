#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, personas, combinacion = 1, i, cont = 1;
	
	scanf("%d", &casos);
	
	while(casos--){
		scanf("%d", &personas);
		
		for(i=2; i<=personas; i++){
			combinacion *= i;
		}
		
		printf("Case #%d: %d\n", cont, combinacion);
		cont++;
		combinacion = 1;
	}
	
	return 0;
}
