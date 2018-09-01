#include <bits/stdc++.h>

using namespace std;

int main(){
	map<int, int> servidores;
	
	int solicitudes, maximo, i,  max, total, rango, cont = 0;
	
	scanf("%d %d", &solicitudes, &maximo);
	
	for(i=0; i<solicitudes; i++){
		scanf("%d", &max);
		servidores[max]++;
	}
	
	max = INT_MIN;
	
	for(i=0; i<=101000; i++){
		
		if(servidores.count(i-1000) > 0){
			cont -= servidores.at(i-1000);
			servidores.erase(i-1000);
		}		
		
		if(servidores.count(i) > 0)
			cont+=servidores.at(i);
				
		
		if(max < cont)
			max = cont;		
		
	}

	rango = max%maximo;
	if(rango > 0)
		rango = 1;
	
	printf("%d\n", (max/maximo) + rango);
	
	
	return 0;
}
