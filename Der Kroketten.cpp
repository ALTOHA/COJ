#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	char croqueta[100000];
	int tamano, i, cont=0;
	while(scanf("%s", croqueta)!=EOF){
		tamano=strlen(croqueta);
		for (i=0; i<tamano; i++){
			if ((croqueta[i]=='K' || croqueta[i]=='k' )&& (croqueta[i+8]=='N' || croqueta[i+8]=='n') && (tamano==9)){
				cont++;
				i=tamano+1;
			}
		}
		(cont>0)?printf ("croqueta "): printf ("%s ", croqueta);
		cont=0;
	}	
	return 0;
}
