#include <bits/stdc++.h>

using namespace std;

int main(){
	map <char, int> moleculas, mol;
	map <char, int> :: iterator it;
	char moleculasCesium[3000], moleculasResultantes[3000], valor[5] = {0}, temp;
	int repetidos, i, j, cont = 0, maximo = INT_MAX, res;
	
	scanf("%s %d", moleculasCesium, &repetidos);
	
	for(i=0; i<strlen(moleculasCesium); i++){
		if(moleculasCesium[i] >= 'A' && moleculasCesium[i] <='Z'){
			for(j=i+1; j<strlen(moleculasCesium); j++){
				if(moleculasCesium[j] >= '0' && moleculasCesium[j] <= '9'){
					valor[cont] = moleculasCesium[j];
					cont++;
				}
				else break;
			}
			
			if(cont == 0)
				moleculas[moleculasCesium[i]] += repetidos;
			else
				moleculas[moleculasCesium[i]] += atoi(valor) * repetidos;
			
			fill(valor, valor+5,0);
			cont = 0;
		}
	}

	scanf("%s", moleculasResultantes);
	
	valor[5] = {0}, cont = 0;
	
	for(i=0; i<strlen(moleculasResultantes); i++){
		if(moleculasResultantes[i] >= 'A' && moleculasResultantes[i] <= 'Z'){
			for(j=i+1; j<strlen(moleculasResultantes); j++){
				if(moleculasResultantes[j] >= '0' && moleculasResultantes[j] <= '9'){
					valor[cont] = moleculasResultantes[j];
					cont++;
				}				
				else
					break;
			}
			if(cont == 0)
				mol[moleculasResultantes[i]]++;
			else
				mol[moleculasResultantes[i]] += atoi(valor);
			
			fill(valor, valor+5,0);
			cont = 0;
		}
	}

	for(it = mol.begin(); it != mol.end(); it++){
		if(moleculas.count(it->first) > 0){
			res = (moleculas.at(it->first))/(it->second);
			if(res < maximo)
				maximo = res;	
		}
		else{
			maximo = 0;
			break;
		}
	}
	
	printf("%d\n", maximo);
	
	return 0;
}
