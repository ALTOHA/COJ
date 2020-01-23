#include <bits/stdc++.h>

using namespace std;

int main(){
	bool cero1 = false, cero2 = false;
	char numero[20], numero2[20], temp[20], temp2[20];
	int i, diferencia = 0, diferencia2 = 0, cont = 0, cont2 = 0;
	
	scanf("%s %s", numero, numero2);
	
	if(strlen(numero) > strlen(numero2))
		diferencia2 = strlen(numero) - strlen(numero2);
	
	else
		diferencia = strlen(numero2) - strlen(numero);


	if(diferencia > 0)
		fill(temp, temp+diferencia, '0');
	
	for(i=0; i<strlen(numero); i++){
		temp[diferencia+i] = numero[i];
	}
	
	if(diferencia2 > 0)
		fill(temp2, temp2+diferencia2, '0');	
	
	
	for(i=0; i<strlen(numero2); i++){
		temp2[diferencia2+i] = numero2[i];
	}
	
	for(i=0; i<strlen(temp); i++){
		
		if(temp[i] > temp2[i]){
			numero[cont] = temp[i];
			cont++;
		}
		
		if(temp2[i] > temp[i]){
			numero2[cont2] = temp2[i];
			cont2++;
		}
		
		if(temp2[i] == temp[i]){
			numero[cont] = temp[i];
			numero2[cont2] = temp2[i];
			cont++, cont2++;
		}
	}
	
	if(cont > 0){
		for(i=0; i<cont; i++){
			if(numero[i] > '0'){
				printf("%c", numero[i]);
				cero1 = true;
			}
			else if((numero[i] == '0' && cero1 == true) || (i == cont-1 && cero1 == false))
				printf("0");
		}
		printf("\n");
	}
	else
		printf("YODA\n");
		
	if(cont2 > 0){
	
		for(i=0; i<cont2; i++){
			if(numero2[i] > '0'){
				printf("%c", numero2[i]);
				cero2 = true;
			}
			else if((numero2[i] == '0' && cero2 == true) || (i == cont2-1 && cero2 == false))
				printf("0");
		}
	}
	else
		printf("YODA\n");
	
	return 0;
}
