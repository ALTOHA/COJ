#include <bits/stdc++.h>

using namespace std;

int main(){
	map <char, unsigned long long int> letras;
	map<char, unsigned long long int> :: iterator it;
	
	unsigned long long int casos, res, i, tam, div, temp, cont = 0;
	char palabra[50];
	
	cin >> casos;
	
	while(casos--){
		cont++;
		res = div = 1;
		letras.clear();
		scanf("%s", palabra);

		tam = strlen(palabra);
		
		for(i=0; i<strlen(palabra); i++){
			letras[palabra[i]]++;
			res*=tam;
			tam--;
		}
		
		for(it = letras.begin(); it != letras.end(); it++){
			temp = 1;
			for(i=2; i<=it->second; i++){
				temp*=i;
			}
			div*=temp;
		}

		cout<<"Data set "<<cont<<": "<<res/div << "\n";
	
	}
	
	return 0;
}
