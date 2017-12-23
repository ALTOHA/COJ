#include <bits/stdc++.h>

using namespace std;

int main(){
	bool turno = false;
	int casos, alan=0, jennifer=0, max_alan=0, max_jenni=0;
	char caritas[10000];
	
	scanf("%d", &casos);
	
	while(casos--){
		scanf("%s", caritas);
	
		for(int i=0; i<strlen(caritas); i++){
			
			if(turno == false){
				jennifer++;
				
				if((caritas[i] == ')' && caritas[i+1] == ':') || (i == strlen(caritas)-1)){
					turno = true;
					
					if(max_jenni < jennifer)
						max_jenni = jennifer, jennifer = 0;
						
					jennifer = 0;
				}
			}
			
			else if(turno == true){
				alan++;
				
				if((caritas[i] == ')' && caritas[i+1] == ':' )|| (i == strlen(caritas)-1)){
					turno = false;
					if(max_alan < alan)
						max_alan = alan, alan = 0;
						
					alan = 0; 
				}
				
			}	
		}
		
		(max_alan > max_jenni) ? printf("Alan\n") : printf("Jennifer\n");
		
		max_alan = max_jenni = alan = jennifer = 0;
		turno = false;
	
	}
	
	return 0;
}
