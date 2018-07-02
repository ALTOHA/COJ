#include <bits/stdc++.h>

using namespace std;

int main(){
	int arr[105] = {1}, i, num_celdas, j, casos, cont;	
	
	scanf("%d", &casos);
	
	while(casos--){
		fill(arr, arr+105, 1);
		cont = 0;
		scanf("%d", &num_celdas);
		
		for(i=2; i<=num_celdas; i++){
			for(j=i; j<=num_celdas; j+=i){
				if(arr[j] == 1)
					arr[j] = 0;
				else
					arr[j] = 1;
			}
		}
		for(i=1; i<=num_celdas; i++){
			if(arr[i] == 1)
				cont++;
		}
		
		printf("%d\n", cont);
	}
	
	return 0;
}
