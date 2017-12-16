#include <bits/stdc++.h>

using namespace std;

int main(){
	map <int, int> capitulos;
	int total, episodio, relleno;
	
	scanf("%d %d", &total, &relleno);
	
	for(int i=0; i<relleno; i++){
		scanf("%d", &episodio);
		
		capitulos[episodio] = 1;
		
	}
	
	total-=capitulos.size();
	
	printf("%d\n", total);
	return 0;
}
