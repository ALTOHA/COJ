#include <bits/stdc++.h>

using namespace std;

int main(){
	int cant_nombre, cant_busq, cont = 0;
	char nombre[100], apellido[100];
	
	map <string, int> buscar;
	map <string, int> :: iterator it;
	
	scanf("%d", &cant_nombre);
	
	while(cant_nombre--){
		
		scanf("%s %s", nombre, apellido);
		
		buscar[apellido]++;
	}
	
	scanf("%d", &cant_busq);
	
	while(cant_busq--){
		
		scanf("%s %s", nombre, apellido);
		
		for(it = buscar.begin(); it!=buscar.end(); it++){
			if(apellido == it->first)
			cont = it->second;
		}
		
		printf("%d\n", cont);
		cont = 0;
	}

	return 0;
}
