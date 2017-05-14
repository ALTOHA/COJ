#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	int tamano, i, cont1=0, cont2=1;
	char nombre[1000];
	while(gets(nombre)!=NULL){
		tamano=strlen(nombre);
		for (i=0; i<tamano; i++){
			if (nombre[i]>='A' && nombre[i]<='Z')
				cont1++;
			else if (nombre[i]==' ')
				cont2++;
		}
		(cont1==cont2)?printf ("correct\n") : printf ("awful\n");
		cont1=0;
		cont2=1;
	}
	return 0;
}
