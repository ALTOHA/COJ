#include <bits/stdc++.h>

using namespace std;

int main(){
	int alice, betty, cartasa[10000] ,cartasb[10000], i, j, pos, cont=0, cont2=0;
	
	while(scanf("%d %d", &alice, &betty) && alice != 0 && betty != 0){
		for(i=0; i<alice; i++){
			scanf("%d", &cartasa[i]);
		}

		for(j=0; j<betty; j++){
			scanf("%d", &cartasb[j]);
		}
		if(betty > alice){
			
			for(i=0; i<alice; i++){
				for(j=0; j<betty; j++){
					
					if(cartasa[i] == cartasb[j])
						cont=0, j = betty;
					else 
						cont++, pos = j;
				}
				
				if(cont > 0){
					cont2++, cartasb[pos] = cartasa[i];
				}
			}
			
		}
		else{
			for(i=0; i<betty; i++){
				for(j=0; j<alice; j++){
					
					if(cartasa[j] == cartasb[i])
						cont=0, j = alice;
					else 
						cont++, pos = j;
				}
				
				if(cont > 0){
					cont2++, cartasa[pos] = cartasb[i];
				}
			}			
			
		}
		printf("%d\n", cont2);
		cont = cont2 = 0;
	}
	return 0;
}
