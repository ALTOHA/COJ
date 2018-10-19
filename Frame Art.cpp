#include <bits/stdc++.h>

using namespace std;

void lineas(int tam){
	int i;
	printf("+");
	for(i=0; i<tam+2; i++)
		printf("-");

	printf("+\n");

}

int main(){
	int i;
	char frase[1000000];
	while(gets(frase)){
		
		if((frase[0] == 'E') && (frase[1] == 'N') && (frase[2] == 'D') && strlen(frase) == 3)
			break;

		lineas(strlen(frase));
		cout << "| " << frase <<" |\n";
		lineas(strlen(frase));
					

		printf("\n");	
	}

	return 0;
}
