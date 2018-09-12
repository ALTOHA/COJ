#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, num_ciudades, dias_ciudad[1000], dias, cont, i, total;
	
	scanf("%d", &casos);
	
	while(casos--){
		cont = total = 0;
		scanf("%d %d", &dias, &num_ciudades);
		
		for(i=0; i<num_ciudades; i++)
			scanf("%d", &dias_ciudad[i]);
		
		
		sort(dias_ciudad, dias_ciudad+num_ciudades);
		
		for(i=0; i<num_ciudades; i++){
			total+=dias_ciudad[i];
			if(total > dias)
				break;
			else
				cont++;
		}
		
		printf("%d\n", cont);
	}
	
	return 0;
}
