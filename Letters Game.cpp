#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main(){
	char palabra[100000];
	int tamano, i, ascii, cont=0, arr[50], pepe=0, juan=0, empieza, min2=0, empate;
	
	scanf("%d %s %d", &tamano, palabra, &empieza);
	
	for(i=0; i<tamano; i++){
		
		ascii=palabra[i];
		arr[ascii-65]++;
			
	}

	
		for(i=0; i<26; i++){
			cont+=arr[i];
			min2 = tamano-cont;
			if(empieza % 2 == 0){
				(i % 2 == 0) ? pepe += arr[i]*min2 : juan+=arr[i]*min2; 
			
				if(arr[i]>0)
					empate = i;
			}
			
			else{
				(i % 2 != 0) ? pepe += arr[i]*min2 : juan+=arr[i]*min2; 
				
				if(arr[i]>0)
					empate = i;
			}
			
		}
		
		if(pepe>juan)
			printf("PEPE %d\n", pepe-juan);
			
		else if(juan>pepe)
			printf("JUAN %d\n", juan-pepe);
		
		else{
			if(empieza % 2 == 0){
				if(empate % 2 == 0)
					printf("PEPE 0\n");
				else printf("JUAN 0\n");
			}else{
				if(empate % 2 != 0)
					printf("PEPE 0\n");
				else printf("JUAN 0\n");	
			}	
		}

	return 0;
}
