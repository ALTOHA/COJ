#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, num_equipos, pos[10000], total=0, i;
	char equipo[20];
	
	scanf("%d", &casos);
	
	while(casos--){

		scanf("%d", &num_equipos);
		
		for(i=0; i<num_equipos; i++){
			scanf("%s %d", equipo, &pos[i]);
		}
		sort(pos, pos+i);
		
		for(i=0; i<num_equipos; i++){
			total += abs(pos[i] - (i+1));
		}
		printf("%d\n", total);
		
		total = 0;
		
	}
	return 0;
}
