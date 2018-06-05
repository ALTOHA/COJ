#include <bits/stdc++.h>

using namespace std;

int main(){
	char password[100000];
	int casos, i, cont;
	
	scanf("%d", &casos);
	
	while(casos--){
		scanf("%s", password);
		
		for(i=0; i<strlen(password); i++){
			if(i % 2 == 0)
				cont = password[i]-'0';
			else
				cont = 0;
				
			while(cont--)
				printf("%c", password[i+1]);
		}
		
		printf("\n");
	}
	
	return 0;
}
