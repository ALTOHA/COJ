#include <bits/stdc++.h>

using namespace std;

int main(){
	map <long int, int> rectangulo;
	map <long int, int> :: reverse_iterator rit;
	bool ac = false;
	long int numeros, lados, area, largo = 0, ancho = 0;
		
	scanf("%ld %ld", &numeros, &area);
	
	while(numeros--){
		scanf("%ld", &lados);
		rectangulo[lados]++;
	}
	
	for(rit = rectangulo.rbegin(); rit != rectangulo.rend(); rit++){
		if(rit->second > 1 && largo == 0){
			largo = rit-> first;
			rectangulo[largo] -= 2;
		}
			
		if(rit ->second > 1)
			ancho = rit -> first;
			
		if(ancho > 0 && largo*ancho >= area){
			ac = true;
			break;
		}
			
	}
	
	(ac == true) ? printf("Anyi puede hacerlo\n") : printf("Anyi no puede hacerlo\n");
	
	return 0;
}
