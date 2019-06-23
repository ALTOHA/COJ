#include <bits/stdc++.h>

using namespace std;

int main(){
	map <int, int> suenos;
	map <int, int> :: iterator it;
	int casos, total, num_frustrados, frustrados, i;
	
	scanf("%d", &casos);
	
	while(casos--){
		scanf("%d %d", &total, &num_frustrados);
		suenos.clear();
		
		for(i=1; i<=total; i++)
			suenos[i];
		
		
		while(num_frustrados--){
			scanf("%d", &frustrados);
			suenos.erase(frustrados);
		}
		
		for(it=suenos.begin(); it != suenos.end(); it++)
			printf("%d ", it->first);
		
		printf("\n");
	}
	
	return 0;
}
