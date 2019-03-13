#include <bits/stdc++.h>

using namespace std;

int main(){
	map <int, int> modulo;
	bool ac;
	int casos, num_estudiantes, id[305], i, cont;
	
	scanf("%lld", &casos);
	
	while(casos--){
		cont = 1;
		ac = false;
		modulo.clear();
		scanf("%d", &num_estudiantes);
		
		
		for(i=0; i<num_estudiantes; i++){
			scanf("%d", &id[i]);
		}
		
		while(1){
			for(i=0; i<num_estudiantes; i++){
				
				if(modulo.count(id[i] % cont) > 0){
					modulo.clear();	
					break;
				}
				else
					modulo[id[i]%cont];
				
				if(modulo.size() == num_estudiantes)
					ac = true;
				
			}
			
			if(ac == true){
				printf("%d\n", cont);
				break;
			}
			
			cont++;
		}
	}
	
	return 0;
}
