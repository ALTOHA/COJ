#include <bits/stdc++.h>

using namespace std;

int main(){
	char numero[5], numero2[5];
	int tamano, suma, i, num, suma2=0, j, tamano2=0, num2=0, pos;
	
	while(scanf("%s", numero) && numero[0] != 'E'){
		
		tamano=strlen(numero);
		
		for(i=0; i<tamano; i++)
			suma+=numero[i]-'0';
		
		num=atol(numero);
		num2 = num;
		
		for(i = num-1; i>=0; i--){	
			
			num2 = i;		
			
			while(num2 > 0){
				suma2 += num2 % 10;
				num2 /= 10;
			}
			
			if(suma2 == suma-1)
				pos = i, i = -1;
				
			suma2=0;
		}
		
		printf("%d\n", pos);
		
		suma=suma2=0;
	}
	
	return 0;
}
