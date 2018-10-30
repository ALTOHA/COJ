#include <cstdio>
#include <algorithm>

using namespace std;

int primo[50000005];

void prime(){
	int i, j, cont = 1;
	fill(primo, primo+50000000, -1);
	primo[1] = primo[0] = 0;
	
	for(i=2; i<=49999990; i++){
		
		if(primo[i] == -2){
			primo[i] = cont-1;
		}
		
		if(primo[i] == -1){
			primo[i] = cont;
			cont++;
			for(j=i*2; j<=49999990; j+=i){
				primo[j] = -2;
			}
			
		}
	}
	fill(primo + 49999991, primo + 50000001, cont);
}

int main(){
	int casos, lim1, lim2, cont2 = 1;
	
	prime();
	
	scanf("%d", &casos);	
	
	while(casos--){
		scanf("%d %d", &lim1, &lim2);
		
		printf("Test Case #%d: %d\n", cont2,primo[lim2] - primo[lim1-1]);	
		cont2++;
	}
	
	return 0;
}
