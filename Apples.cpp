#include <bits/stdc++.h>

using namespace std;

int main(){
	int bolsas, manzanas[1000], total=0, cont=0, i;
	
	while(scanf("%d", &bolsas) != EOF){
		for(i=0; i<bolsas; i++){
			scanf("%d", &manzanas[i]);
			
			total+=manzanas[i];
		}
		
		for(i=0; i<bolsas; i++){
			if((total - manzanas[i]) % 2 == 0)
				cont++;
		}
		
		printf("%d\n", cont);
		cont = total = 0;		
	}
	
	return 0;
}
