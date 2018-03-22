#include <bits/stdc++.h>

using namespace std;

int main(){
	int num_diamantes, tamano_max, tamano[1005], cont = 0, i, max = 0, j, dif;
	
	scanf("%d %d", &num_diamantes, &tamano_max);
	
	for(i=0; i<num_diamantes; i++)
		scanf("%d", &tamano[i]);
		
	sort(tamano, tamano+i);
	
	for(i=0; i<num_diamantes; i++){
		cont = 0;
		for(j=i+1; j<num_diamantes; j++){
			
			dif = tamano[j] - tamano[i];
			
			if(dif <= tamano_max)
				cont++;
				
			else
				j = num_diamantes;
		
		}
		
		if(max < cont)
			max = cont;
	}
	printf("%d\n", max+1);
	
	return 0;
}
