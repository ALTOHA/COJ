#include <bits/stdc++.h>

using namespace std;

int main(){
	int num_plantas, petalos[100], suma=0, i, min = 100;
	
	scanf("%d", &num_plantas);
	
	if(num_plantas == 0)
		printf("-1\n");
	
	else{
		
		for(i=0; i<num_plantas; i++){
			scanf("%d", &petalos[i]);
			suma+=petalos[i];
		}
		sort(petalos, petalos+i);
		
		if(suma % 2 == 0){
			for(i=0; i<num_plantas; i++){
				if(petalos[i] % 2 != 0){
					printf("%d\n", suma-petalos[i]);
					break;
				}
				if(i == num_plantas-1)
					printf("-1\n");
			}
		}
		else
			printf("%d\n", suma);
	}
	return 0;
}
