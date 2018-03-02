#include <bits/stdc++.h>

using namespace std;

int main(){
	char palabra1[1000], palabra2[1000], temp;
	int i, cont = 0;
	
	scanf("%s %s", palabra1, palabra2);
	
	for(i = 0; i<strlen(palabra1); i++){
		if(palabra1[i] != palabra2[i]){
			if(palabra1[strlen(palabra1)-i-1] == palabra2[i]){
				cont++;
				temp = palabra1[strlen(palabra1)-i-1];
				palabra1[strlen(palabra1)-i-1] = palabra1[i];
				palabra1[i] = temp;
			}
			else{
				cont = -1;
				break;
			}
		}
	}
	
	(cont > -1 ) ? printf("%d\n", cont) : printf("impossible\n");
	
	return 0;
}
