#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, num_estudiantes, numero, cont , valor, arr[105], i, ultimo;
	scanf("%d", &casos);
	
	while(casos--){
		scanf("%d %d", &num_estudiantes, &numero);
		
		for(i = 1; i<=num_estudiantes; i++)
			arr[i] = i;
		
		valor = numero;
		cont = 0;
		
		for(i=1; i<= num_estudiantes; i++){
			if(arr[i] > 0)
				valor--;
				
			if(valor == 0){
				arr[i] = 0;
				valor = numero;
				cont++;
				ultimo = i;
			}
			
			if(cont < num_estudiantes && i == num_estudiantes)
				i = 0;	
			
		}
		
		printf("%d\n", ultimo);
	}
	
	return 0;
}
