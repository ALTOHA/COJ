#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, total, i;
	char palabra[20];
	
	scanf("%d", &casos);
	
	while(casos--){
		total = 1;
		
		scanf("%s", palabra);
		
		for(i=0; i<strlen(palabra); i++){
			if(palabra[i] == 'a' || palabra[i] == 'e' || palabra[i] == 'i' || palabra[i] == 'o' || palabra[i] == 's' || palabra[i] == 'A' || palabra[i] == 'E' || palabra[i] == 'I' || palabra[i] == 'O' || palabra[i] == 'S' || palabra[i] == '4' || palabra[i] == '3' || palabra[i] == '1' || palabra[i] == '0' || palabra[i] == '5' )
				total*=3;
			else
				total*=2;
				
		}
		printf("%d\n", total);
	}
	return 0;
}
