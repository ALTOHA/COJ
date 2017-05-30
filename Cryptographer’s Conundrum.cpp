#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	char jei[350];
	int tamano, i, cont=0, j=0;
	scanf ("%s", jei);
	tamano=strlen(jei);
	for (i=0; i<tamano; i++){
		if (j==0){
			j++;
			if (jei[i]!='P'){
			cont++;
			}
		}
		else if (j==1){
			j++;
			if (jei[i]!='E'){
				cont++;
			}
		}
		else if (j==2){
			j=0;
			if (jei[i]!='R'){
				cont++;
			}
		}
			
	}
	printf ("%d\n", cont);
	return 0;
}
