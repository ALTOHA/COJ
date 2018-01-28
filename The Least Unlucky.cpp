#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, num_alumnos, numero, i, arr[105], cont = 0, ultimo;
	
	scanf("%d", &casos);
	
	while(casos--){
		scanf("%d %d", &num_alumnos, &numero);
		
		for(i=1; i<=num_alumnos; i++)
			arr[i] = i;
			
		cont = numero; 
		 
		for(i = 1; i<=num_alumnos; i++){
			if(arr[i] > 0)
				cont--;
				
			if(cont == 0){
				arr[i] = 0;
				cont = numero;
				ultimo = i;
			}
			
			if(i == num_alumnos){
				for(int j = 1; j<=num_alumnos; j++){
					if(arr[j] > 0){
						i = 0;
						break;
					}
						
				}
				
			}
		}
		
		printf("%d\n", ultimo);
	}
	
	return 0;
}
