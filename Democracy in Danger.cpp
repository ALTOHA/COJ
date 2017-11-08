#include <bits/stdc++.h>

using namespace std;

int main(){
	int num_grupos, personas[101], i, cont=0;
	
	scanf("%d", &num_grupos);
	
	for(i=0; i<num_grupos; i++){
		scanf("%d", &personas[i]);
	}
	
	sort(personas, personas+num_grupos);
	
		for(i=0; i<=num_grupos/2; i++){
			cont += personas[i]/2;

				cont++;		
		}


	printf("%d\n", cont);
	
	return 0;
}
