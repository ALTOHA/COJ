#include <bits/stdc++.h>

using namespace std;

int main(){
	int numeros, num_remov, jugadas, ultimo, remov, i = 1, cont = 0;
	
	while(scanf("%d %d", &numeros, &num_remov) != EOF){
		i = 1, cont = 0;	
		while(numeros > 0){
			if(i > numeros)
				break;
				
			i*=2;
			
			cont++;
		}
		printf("%d %d ", cont, i/2);
		
		i = 2;
		cont = 1;
		
		while(1){
			if(num_remov % i == 0){
				cont++;
			}	
			else
				break;
				
			i*=2;
		}
		
		printf("%d\n", cont);
	}
	return 0;
}
