#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	int casos, tamano=0, respuesta=0, i=0;
	char numero[1000];
	
	scanf("%d", &casos);
	
	while(casos--){
		scanf("%s", numero);
		tamano = strlen(numero);
		
		for(i=0; i<tamano; i++){
			if(numero[i]>='0' && numero[i]<='9')
				respuesta += numero[i]-'0';
		}
		
		printf("%d\n", respuesta);
		
		respuesta=0;
	}
		
	return 0;
}
