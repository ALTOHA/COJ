#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, valor1, valor2, i;
	
	scanf("%d", &casos);
	
	while(casos--){
		scanf("%d %d", &valor1, &valor2);
		
		for(i=min(valor1, valor2); i<=(valor1*valor2) ; i+=min(valor1, valor2)){
			if(i % valor1 == 0 && i % valor2 == 0){
				printf("%d\n", i);
				break;
			}
		
		}
	}
	
	
	return 0;
}
