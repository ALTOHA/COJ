#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, i;
	char palabra[1005];
	
	scanf("%d", &casos);
	
	while(casos--){
		scanf("%s", palabra);
		
		for(i=strlen(palabra)-1; i>=0; i--)
			printf("%c", palabra[i]);
		
		printf("\n");
	}
	
	return 0;
}
