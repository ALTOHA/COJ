#include <bits/stdc++.h>

using namespace std;

int main(){
	char cadena[1000];
	int i, cont=0, cont2=0, max = INT_MIN;
	
	scanf("%s", cadena);
	
	for(i=0; i<strlen(cadena); i++){
		if(cadena[i] == '1'){
			cont++;
			cont2 = 0;
			
			if(max < cont)
				max = cont;
		}
		if(cadena[i] == '0'){
			cont2++;
			cont = 0;
			
			if(max < cont2)
				max = cont2;
		}

	}
	
	(max >= 7) ? printf("YES\n") : printf("NO\n");
	
	return 0;
}
