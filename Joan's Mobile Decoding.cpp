#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, cont = 0, cont2=0;
	char clave[3];
	
	scanf("%d", &casos);
	
	while(casos--){
		getchar();
		scanf("%s", clave);
		
		if(clave[0] == '+'){
			cont++;
			cont2 = 0;
		}
		
		if(clave[0] == '*'){
			
			if(cont > 0)
				printf("%c", cont+96);
			
			cont = 0;
			cont2++;
		}
		
		if(cont2 == 2)
			printf(" ");
		
		
		if(casos == 0 && cont > 0)
			printf("%c", cont+96);
	}
	
	printf("\n");
	
	return 0;
}
