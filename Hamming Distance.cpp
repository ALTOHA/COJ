#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	char ham[100000], ming[100000];
	int i, tamano, cont=0;
	do{
		scanf ("%s", ham);
		if (ham[0]!='X'){
		scanf ("%s", ming);
		tamano=strlen(ham);	
			for (i=0; i<tamano; i++){
				(ham[i]!=ming[i])?cont++:cont;
			}	
		printf ("Hamming distance is %d.\n", cont);
		cont=0;
		}

	}while (ham[0]!='X');
	return 0;
}
