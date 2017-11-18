#include <bits/stdc++.h>

using namespace std;

int main (){
	int tamano, i, j=0, casos, cont = 0;
	
	std::string palabra;
	std::string palabra2;
	
	scanf("%d", &casos);
	
	while(casos--){
		cin >> palabra >> palabra2;
		
		do{
			std::size_t found = palabra.find(palabra2);			
			
			tamano = palabra.size();
			
			if(found != std::string::npos){
				cont++;
				
				palabra.erase(found, palabra2.size());
			}

			
		}while(tamano != palabra.size());
		
		
		printf("%d\n", cont);
		
		cont = 0;
	}
	return 0;
}
