#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int tc, i;
	char cadena[21];
	
	scanf("%d", &tc);
	
	while(tc--){
		scanf("%s", cadena);
		
		if(strlen(cadena) % 2 == 0){
			
			for(i = 0 ; i < strlen(cadena)/2 ; i++){
				if(cadena[i] == cadena[strlen(cadena) -  i - 1]){
					printf("no\n");
					break;
				}
			}
			
			if(i == (strlen(cadena)/2))
				printf("yes\n");
			
			
		}else
		printf("no\n");
	}
	
	return 0;
}
