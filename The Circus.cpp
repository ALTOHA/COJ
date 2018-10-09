#include <bits/stdc++.h>

using namespace std;

int main(){
	int num_familias, capacidad, familia, i, entraron;
	
	while(scanf("%d %d", &capacidad, &num_familias)){
		entraron = 0;
		
		if(capacidad == 0 && num_familias == 0)
			break;
			
		for(i=0; i<num_familias; i++){
			scanf("%d", &familia);
			
			if(familia <= capacidad){
				entraron++;
				capacidad -= familia;
			}
		}
		printf("%d %d\n", entraron, capacidad);
	}
	
	
	return 0;
}
