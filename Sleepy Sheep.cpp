#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, num_ovejas, i, cont;
	char ovejas[100];
	
	scanf("%d", &casos);
	
	while(casos--){
		cont = 0;
		scanf("%d %s", &num_ovejas, ovejas);
		
		for(i=0; i<num_ovejas; i++){
			if(ovejas[i] == '>' && ovejas[i+1] == '<'){
				cont++;
				ovejas[i] = '<', ovejas[i+1] = '>';
				i = -1;
			}
		}
		
		printf("%d\n", cont);
	}
	
	return 0;
}
