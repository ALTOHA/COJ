#include <bits/stdc++.h>


using namespace std;

int main(){
	char frase[100000], porc='%';
	int tamano, i;
	
	while((gets(frase)) && frase[0]!='#'){
		
		tamano = strlen(frase);
		
		for(i=0; i<tamano; i++){
			
			if(frase[i] == ' ')
				cout << "%20";
				
			else if(frase[i] == '!')
				cout << "%21";
				
			else if(frase[i] == '$')
				cout << "%24";
				
			else if(frase[i] == '%')
				cout << "%25";
			
			else if(frase[i] == '(')
				cout << "%28";
				
			else if(frase[i] == ')')
				cout << "%29";
				
			else if(frase[i] == '*')
				cout<<"%2a";
				
			else cout << frase[i];
		}
	cout << "\n";
	}	
	return 0;
}
