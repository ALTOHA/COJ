#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	char letras[100], texto[100000];
	int tamano, ascci[100], cont=0, i, j, l=0;
		do{
		gets(texto);
		if (texto[0]!='*'){
			tamano=strlen(texto);
				for (i=0; i<tamano; i++){
				if (texto[i-1]==' ' || i==0){
				ascci[l]=texto[i];
				l++;
				}
				}
				for (j=0; j<l; j++){

				if (j<=l-2){
				(ascci[j]==ascci[j+1] || ascci[j]==ascci[j+1]+32 || ascci[j]==ascci[j+1]-32)?cont++: j=l+1;
				}
				}
				(cont==l-1)?printf ("Y\n"):printf("N\n");
		}
		cont=l=0;
		}while (texto[0]!='*');
	
	return 0;
}
