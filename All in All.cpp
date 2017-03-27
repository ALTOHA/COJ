#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	char jei[100], joy[100];
	int tamano, tamano2, i, j, cont=0, l=0;
	while(scanf ("%s %s", jei, joy)!=EOF){
	tamano=strlen(jei);
	tamano2=strlen(joy);
		for(i=cont; i<tamano; i++){
			for (j=l; j<tamano2; j++){
				if (jei[i]==joy[j]){
					cont++;
					l=j+1;
					j=tamano2+1;
				}
			}
		}
		(cont==tamano)?printf("Yes\n"):printf ("No\n");
		cont=l=0;
	}
	return 0;	
}
