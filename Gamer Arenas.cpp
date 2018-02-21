#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, letras[27], i, ascii;
	char palabra1[1005], palabra2[1005];
	bool anagrama;
	
	scanf("%d", &casos);
	getchar();

	while(casos--){
		fill(letras, letras+27, 0);
		anagrama = true;
		gets(palabra1);
		gets(palabra2);
		
		for(i=0; i<strlen(palabra1); i++){
			if(palabra1[i] != ' '){
				ascii = palabra1[i];
				letras[ascii-97]++;
			}
			
		}
		for(i=0; i<strlen(palabra2); i++){
			if(palabra2[i] != ' '){
				ascii = palabra2[i];
				letras[ascii-97]--;
			}
		}
		
		for(i=0; i<27; i++){
			if(letras[i] != 0)
				anagrama = false, i = 27;
		}
		
		(anagrama == true) ? printf("yes\n") : printf("no\n");
		
	}
	
	return 0;
} 
