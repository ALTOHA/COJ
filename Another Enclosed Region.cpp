#include <cstdio>
#include <cstring>

using namespace std;

int main(){
int i, tamano, valor=0;
char jei[10000];
scanf ("%s", jei);
tamano=strlen(jei);
for (i=0; i<tamano; i++){
	if (jei[i]=='A' || jei[i]=='Q' || jei[i]=='R' || jei[i]=='O' || jei[i]=='P' || jei[i]=='D')
	valor++;
	else if (jei[i]=='B')
	valor=valor+2;
}	
	printf ("%d\n", valor);
	return 0;
}
