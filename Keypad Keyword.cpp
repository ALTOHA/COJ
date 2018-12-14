#include <bits/stdc++.h>

using namespace std;

int main(){
	bool ac;
	map <string, string> pal;
	map <string, string> :: iterator it;
	int num_palabras, num_codigo, i;
	char palabra[100], codigo[100];
	
	scanf("%d", &num_palabras);
	
	while(num_palabras--){
		scanf("%s", palabra);
		pal[palabra];
	}
	scanf("%d", &num_codigo);
	
	while(num_codigo--){
		ac = false;
		scanf("%s", codigo);
		
		for(it = pal.begin(); it!= pal.end(); it++){
			
			if((it->first).size() == strlen(codigo)){
			
				
				for(i=0; i<strlen(codigo); i++){
					
					if(codigo[i] == '0' || codigo[i] == '1')
						break;
					
					if(codigo[i] == '2' && it->first[i] != 'A' && it->first[i] != 'B' && it->first[i] != 'C')
						break;
						
					if(codigo[i] == '3' && it->first[i] != 'D' && it->first[i] != 'E' && it->first[i] != 'F')
						break;
						
					if(codigo[i] == '4' && it->first[i] != 'G' && it->first[i] != 'H' && it->first[i] != 'I')
						break;
						
					if(codigo[i] == '5' && it->first[i] != 'J' && it->first[i] != 'K' && it->first[i] != 'L')
						break;
						
					if(codigo[i] == '6' && it->first[i] != 'M' && it->first[i] != 'N' && it->first[i] != 'O')
						break;
						
					if(codigo[i] == '7' && it->first[i] != 'P' && it->first[i] != 'Q' && it->first[i] != 'R' && it->first[i] != 'S')
						break;
						
					if(codigo[i] == '8' && it->first[i] != 'T' && it->first[i] != 'U' && it->first[i] != 'V')
						break;
						
					if(codigo[i] == '9' && it->first[i] != 'W' && it->first[i] != 'X' && it->first[i] != 'Y' && it->first[i] != 'Z')
						break;
						
					if(i == strlen(codigo)-1 && ac == false){
						cout << it->first << "\n";
						ac = true;
						break;
					}
					
				}
				
			}
			
		}
			if(ac == false)
				printf("no solution\n");		
	}
	
	return 0;
}
