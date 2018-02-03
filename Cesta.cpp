#include <bits/stdc++.h>

using namespace std;

int main(){
	bool cero = false;
	char numero[150000];
	int suma = 0, i;
	scanf("%s", numero);
	
	for(i = 0; i<strlen(numero); i++){
		suma += numero[i]-'0';
		
		if(numero[i] == '0')
			cero = true;
	}
	
	if(suma % 3 != 0 || cero == false)
		printf("-1\n");
	else{
		
		sort(numero, numero+strlen(numero));
		
		for(i = strlen(numero)-1; i>=0; i--)
			printf("%c", numero[i]);
		
		printf("\n");
	}
	
	return 0;
}
