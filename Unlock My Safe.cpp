#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, numero, cont,  i, j, tam;

	vector<int> permutation; 
	
	scanf("%d", &casos);
	
	while(casos--){
		permutation.clear();
		cont = 0, tam = 1;
		
		scanf("%d", &numero);
		
		for(i=numero; i>=2; i--)
			tam*=i;
			
		
		for (i = 0; i < numero; i++) { 
			permutation.push_back(i); 
		} 
		
		do{ 
			if(cont == (tam / 3)){
				for(j=0; j<numero; j++)
					printf("%d",permutation[j]+1);
				
				printf("\n");
				break;
			}
			cont++;
				
	
		} while (next_permutation(permutation.begin(),permutation.end()));
		
	}
		
	return 0;
}
