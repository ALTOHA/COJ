#include <bits/stdc++.h>

using namespace std;

int main(){
	map <int, int> notas;
	int tiempo, querry, i, cont = 0, ti, cont2 = 1, que;
	
	scanf("%d %d", &tiempo, &querry);
	
	for(i=0; i<tiempo; i++){
		scanf("%d", &ti);
		
		while(ti--){
			notas[cont] = cont2;
			cont++;
		}
		cont2++;
	}
	
	while(querry--){
		scanf("%d", &que);
		
		printf("%d\n", notas.at(que));
		
	}
	return 0;
}
