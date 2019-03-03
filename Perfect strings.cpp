#include <bits/stdc++.h>

using namespace std;

int main(){
	int i, vocales = 0, consonantes = 0;
	char palabra[1005];
	
	scanf("%s", palabra);
	
	for(i=0; i<strlen(palabra); i++){
		if(palabra[i] == 'a' || palabra[i] == 'e' || palabra[i] == 'i' || palabra[i] == 'o' || palabra[i] == 'u')
			vocales++;
		else
			consonantes++;
	}
	
	(consonantes < vocales) ? printf("perfect\n") : printf("imperfect\n");
	
	return 0;
}
