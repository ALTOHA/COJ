#include <bits/stdc++.h>

using namespace std;

bool ready[100005];
int value[100005], coins[4] = {6,5,3,1};

int solve(int x) { 
	if (x < 0) 
		return 100000; 
	if (x == 0) 
		return 0; 
	if(ready[x])
		return value[x];	
		
	int best = 100000; 
	for (int i = 0; i<4; i++) { 
		best = min(best, solve(x-coins[i])+1); 
	} 
	value[x] = best;
	ready[x] = true;
	return best; 
	
}
int main(){
	int casos, valor, j;
	
	scanf("%d", &casos);
		
	for(j=1; j<=casos; j++){
		scanf("%d", &valor);
		printf("Case %d: %d\n",j, solve(valor));
	}
	
	return 0;
}
