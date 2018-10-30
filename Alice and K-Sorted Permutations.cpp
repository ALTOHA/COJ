#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, tamano, val, maximo, i;
	
	scanf("%d", &casos);
	
	while(casos--){
		scanf("%d", &tamano);
		
		maximo = INT_MIN;
		
		for(i=1; i<=tamano; i++){
			scanf("%d", &val);
			
			if(abs(val-i) > maximo)
				maximo = abs(val-i);
		}
		
		printf("%d\n", maximo);
	}
	
	return 0;
}
