#include <bits/stdc++.h>

using namespace std;

int main(){
	int numero, i, l=0, res[1000], val, pos[10], j, posicion=0;
	char letra = 97, palabra[1000];
	map <char, int> tel;
	map <char, int> :: iterator it;
	
	for(i=0; i<9; i++){
		scanf("%d", &numero);
		pos[i] = numero;
		if(i != 0 && i!= 8 && i!=6){
			tel[letra] = numero;
			tel[letra+1] = numero+10;
			tel[letra+2] = numero+20;
			letra+=3;	
		}
	
		else if(i == 8 || i == 6){
			tel[letra] = numero;
			tel[letra+1] = numero+10;
			tel[letra+2] = numero+20;
			tel[letra+3] = numero+30;	
			letra+=4;		
		}

	}
	scanf("%s", palabra);
	
	for(i=0; i<strlen(palabra); i++){
		for(it = tel.begin(); it != tel.end(); it++){
			
			if(palabra[i] == it -> first){
				
				for(j=0; j<9; j++){
					if(it->second % 10 == pos[j]){
						posicion = j+1;
					}
				}
				for(j=0; j<9; j++){
					if(posicion == pos[j])
						posicion = j+1, j=9;
					
				}
				if(res[l-1] == posicion)
					res[l] = 0, l++;
				
				val = it->second;
				
				while(val > 0){
					res[l] = posicion;
					l++;
					val-=10;
				}
			}
		
		}
	}
	
	for(i=0; i<l; i++){
		if(res[i] == 0)
			printf("#");
		else
		printf("%d", res[i]);
	
	}
	printf("\n");
	return 0;
}
