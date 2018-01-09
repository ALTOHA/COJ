#include <bits/stdc++.h>

using namespace std;

int main(){
	int flechas, blanco=0, negro=0, num;
	char cuadro[2], letra;
	
	scanf("%d", &flechas);
	
	while(flechas--){
		scanf("%s", cuadro);
		letra = cuadro[0], num = cuadro[1]-'0';
		if(letra == 'A' || letra == 'C' || letra == 'E' || letra == 'G'){
			(num % 2 != 0) ? negro++ : blanco++;
		}
		else {
			(num % 2 == 0) ? negro++ : blanco++;
		}

	}
	printf("%d\n", abs(negro-blanco));

	return 0;
}
