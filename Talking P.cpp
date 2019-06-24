#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos;
	char temp;
	
	scanf("%d", &casos);
	getchar();
	while(casos--){
		while(scanf("%c", &temp) && temp != '\n'){
			if(temp == 'a' || temp == 'e' || temp == 'i' || temp == 'o' || temp == 'u'){
				printf("%cp%c", temp, temp);
			}
			else
				printf("%c", temp);
		}
		printf("\n");
	}
	
	return 0;
}
