#include <bits/stdc++.h>

using namespace std;

int main(){
	int tamano, i, cont=0, cont2=0, cont3=0;
	char palabra[100000];
	
	scanf("%d %s", &tamano, palabra);
	
	for(i=0; i<tamano/3+1 ; i++){
		if(palabra[i] == 'a' || palabra[i] == 'e' || palabra[i] == 'o' || palabra[i] == 'i' || palabra[i] == 'u')
			cont ++;
	}
	
	for(i=tamano/3+1; i<2*(tamano/3+1); i++){
		if(palabra[i] == 'a' || palabra[i] == 'e' || palabra[i] == 'o' || palabra[i] == 'i' || palabra[i] == 'u')
			cont2++;
	}
	
	for(i = 2*(tamano/3+1); i<strlen(palabra); i++){
		if(palabra[i] == 'a' || palabra[i] == 'e' || palabra[i] == 'o' || palabra[i] == 'i' || palabra[i] == 'u')
			cont3++;	
	}
	
	printf("%d %d %d\n", cont, cont2, cont3);
	return 0;
}
