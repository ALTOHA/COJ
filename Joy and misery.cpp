#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, lim_inf, lim_sup, par, impar, i;
	
	scanf("%d", &casos);
	
	while(casos--){
		par = impar = 0;
		
		scanf("%d %d", &lim_inf, &lim_sup);
		
		for(i=lim_inf;  i<=lim_sup; i++){
			
			if(i % 2 == 0)
				par++;
				
			else 
				impar++;
				
			if(lim_sup % 2 == 0 && lim_sup != i)
				par++;
				
			else if(lim_sup != i)
				impar++;
				
			lim_sup--;
		}
		
		printf("%d %d\n", par, impar);
	}
	
	return 0;
}
