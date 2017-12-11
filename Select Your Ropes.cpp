#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, cuerdas, peso[10000], i, max=INT_MIN, weight, rope=0;
	
	scanf("%d", &casos);
	
	while(casos--){
		scanf("%d", &cuerdas);
		
		for(i=0; i<cuerdas; i++)
			scanf("%d", &peso[i]);
		
		sort(peso, peso+cuerdas);
		
		for(i = cuerdas-1; i >= 0; i--){
			rope++;
			
			weight = peso[i] * rope;
			
			if(max <  weight)
				max = weight;
		}
		printf("%d\n", max);
		rope = 0;
		max = INT_MIN;
	}
	
	return 0;
}
