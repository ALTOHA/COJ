#include <bits/stdc++.h>

using namespace std;

int main(){
	char oraciones[10000], let = 'A';
	int i, max = -1, dif, pos, cont = 0;
	map <char, int> letras;
	map <char, int> :: iterator it;
	
	for(i = 0; i< 26; i++){
		letras[let];
		let++;		
	}
	
	
	while(gets(oraciones)!= NULL){	
		for(i=0; i<strlen(oraciones); i++){
			if(oraciones[i] >= 'A' && oraciones[i] <='Z')
				letras[oraciones[i]] ++;
		}
	}
	while(max != 0){
	
		cont = pos = 0;
		
		for(it = letras.begin(); it!= letras.end(); it++){
			if(max <= it->second){
				max = it->second;
				pos = cont+1;
			}
			cont++;
		}	
		
		cont = 1;
		for(it = letras.begin(); it!= letras.end(); it++){

			if(it->second < max)
				printf("  ");
			if(it->second == max){
				printf("* ");
				it->second--;
			}
			
			if(cont == pos){
				printf("\n");
				break;
			}
			
			cont++;
		}
		max--;
	}
	for(it = letras.begin(); it!= letras.end(); it++)
		printf("%c ", it->first);
	
	return 0;
}
