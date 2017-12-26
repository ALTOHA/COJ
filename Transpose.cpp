#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, arr[100005], i, largo, ancho, cont=0, pos = 0, cont2=0;
	
	scanf("%d", &casos);
	
	while(casos--){
		scanf("%d %d", &largo, &ancho);
	
		for(i=0; i<largo*ancho; i++)
			scanf("%d", &arr[i]);
		
		
		for(i=0; i<largo*ancho; i++){
			
			printf("%d ", arr[i]);
			i+=ancho-1;
			cont++, cont2++;
			
			if(cont == largo){
				cont = 0;
				i = pos;
				pos++;
				printf("\n");
			}
			
			if(cont2 == largo*ancho)
				break;
		}
		
		cont = cont2 = pos = 0;
	}
	return 0;
}
