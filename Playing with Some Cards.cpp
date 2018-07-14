#include <bits/stdc++.h>

using namespace std;

int main(){
	bool uno = false;
	int num_cartas, valores[1005],i, min, j;
	
	scanf("%d", &num_cartas);
	
	for(i=1; i<=num_cartas; i++){
		scanf("%d", &valores[i]);
	}
	

	sort(valores, valores+i);

	
	for(j=num_cartas; j>=1; j--){
		
		min = valores[1];

		if((valores[j] - valores[j-1]) < valores[j] && (valores[j] > valores[j-1])){
			valores[j] -= valores[j-1];
			if(valores[j] == 1){
				uno = true;
				break;
			}
			sort(valores, valores+i);

			j = num_cartas+1;	
		}
	}		

	(uno == true) ? printf("%d\n", num_cartas):printf("%d\n", min * num_cartas);
	
	
	return 0;
}
