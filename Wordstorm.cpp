#include <bits/stdc++.h>

using namespace std;

int main(){
	map <char, int> letras, letras2;
	map <char, int> :: iterator it;
	bool pr1, pr2;
	char palabra[10], principal, comp[1000];
	int valor, cont[10], i;
	
	while(scanf("%s", palabra) != EOF){
		letras.clear();
		letras2.clear();
		for(i=0; i<9; i++){
			letras[palabra[i]]++;
			
			if(i == 4)
				principal = palabra[i];
		
		}
		scanf("%d", &valor);
		
		while(valor--){
			pr1 = false, pr2 = true;
			for(it = letras.begin(); it != letras.end(); it++){
				letras2[it->first] = it->second;
			}			
			
			scanf("%s", comp);
			
			if(strlen(comp) < 4)
				printf("%s is invalid\n", comp);
			
			
			else{
				for(i=0; i<strlen(comp); i++){
					if(letras2.count(comp[i]) > 0){
						if(letras2.at(comp[i]) > 0)
							letras2[comp[i]]--;
						else{
							pr1 = false;
							break;
						} 
							
						
					//	printf("%c %d\n", comp[i], letras2.at(comp[i]));
					}
					else{
						
						pr2 = false;
						break;
					}
					
					if(principal == comp[i])
							pr1 = true;
					
				}
				if(pr1 == true && pr2 == true)
					printf("%s is valid\n", comp);
				else
					printf("%s is invalid\n", comp);
			}
		}	
		
	}
	
	return 0;
}
