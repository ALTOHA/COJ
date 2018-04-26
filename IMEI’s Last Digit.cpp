#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, digito, ultimo, i, suma;
	char IMEI[13];
	
	scanf("%d", &casos);
	
	while(casos--){
		suma = 0;
		scanf("%s", IMEI);
		
		for(i=0; i<strlen(IMEI); i++){
			digito = IMEI[i]-'0';
			if(i % 2 != 0){
				digito *= 2;
				if(digito >= 10){
					digito -= 9;
				}	
			}
			suma += digito;
		}
		ultimo = suma%10;
		
		(ultimo > 0) ? printf("%d\n", 10-ultimo) : printf("0\n");
	}
	
	return 0;
}
