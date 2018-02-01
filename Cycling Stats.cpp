#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, metros, total_metros = 0, tiempo, total_tiempo = 0;
	
	scanf("%d", &casos);
	
	while(casos--){
		scanf("%d %d", &metros, &tiempo);
		
		total_metros += metros;
		total_tiempo += tiempo;
		
	}
	
	printf("%d %d %d\n", total_metros, total_tiempo, total_metros/total_tiempo);
	
	return 0;
}
