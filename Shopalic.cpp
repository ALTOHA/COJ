#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, num_articulos, precios[20000], total=0, i, cont, l;
	
	scanf("%d", &casos);
	
	while(casos--){
		scanf("%d", &num_articulos);
		
		for(i = 0; i < num_articulos; i++){
			scanf("%d", &precios[i]);
		}
		sort(precios, precios + i);
		
		l = num_articulos - 3; 
		
		while(l >= 0){
		
			total += precios[l];
			l-=3;

		}
		
		printf("%d\n", total);
		
		total = 0;
	}
	return 0;
}
