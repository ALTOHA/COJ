#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	char ascii[100];
	int largo, ancho, i, j, cont=0, cont2=0, l=0;
	scanf ("%d %d", &largo, &ancho);
	for (i=0; i<largo; i++){
		scanf ("%s", ascii);
		for (j=0; j<ancho; j++){
			if ((ascii[j]=='\\' || ascii[j]=='/') && l==0){
				cont++;
				l++;
			}
			else if (l>0 && ascii[j]=='.'){
				cont2++;
			}
			else if ((ascii[j]=='\\' || ascii[j]=='/') && l>0){
				l=0;
				cont++;
			}
		}		
	}
			cont=cont/2;
		printf ("%d\n", cont+cont2);
	
	return 0;
}
