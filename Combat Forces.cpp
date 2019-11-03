#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, Manny[1005], Jimmy[1005], numManny, numJimmy, i, j, sumaM, sumaJ;
	
	scanf("%d", &casos);
	
	while(casos--){
		
		sumaM = sumaJ = 0;
		
		fill(Manny, Manny + 1005, 0);
		fill(Jimmy, Jimmy + 1005, 0);
				
		scanf("%d %d", &numManny, &numJimmy);
		
		for(i=0; i<numManny; i++){
			scanf("%d", &Manny[i]);
			sumaM += Manny[i];
		}

		for(i=0; i<numJimmy; i++){
			scanf("%d", &Jimmy[i]);		
			sumaJ += Jimmy[i];
		}
		
		sort(Manny, Manny+numManny);
		sort(Jimmy, Jimmy+numJimmy);		
		
		numManny --, numJimmy --;
		
		while(numManny >= 0 && numJimmy >= 0){
			if(sumaJ > Manny[numManny] && sumaM > Jimmy[numJimmy]){
				sumaJ -= Jimmy[numJimmy];
				sumaM -= Manny[numManny];
				numManny--, numJimmy--;
			}
			else if(sumaJ > Manny[numManny]){
				sumaM -= Manny[numManny];
				numManny--;
			}
			else if(sumaM > Jimmy[numJimmy]){
				sumaJ -= Jimmy[numJimmy];
				numJimmy--;
			}
			else{
				printf("T %d %d\n", numManny+1, numJimmy+1);
				break;
			}
		}
		
		if(numManny < 0)
			printf("J %d\n", numJimmy+1);
		
		else if(numJimmy < 0)
			printf("M %d\n", numManny+1);
		
	}
	
	return 0;
}
