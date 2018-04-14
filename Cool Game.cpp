#include <bits/stdc++.h>

using namespace std;

int main(){
	char mat[100000];
	int uno1, cero1, uno2, cero2, casos, tam, i, j;
	
	scanf("%d", &casos);
	
	while(casos--){
		uno1 = uno2 = cero1 = cero2 = 0;
		scanf("%d", &tam);
		
		for(i=0; i<tam; i++){
			scanf("%s", mat);
			
			for(j=0; j<strlen(mat); j++)
				(mat[j] == '0') ? cero1++ : uno1++;
		}
		
		for(i=0; i<tam; i++){
			scanf("%s", mat);
			
			for(j=0; j<strlen(mat); j++)
				(mat[j] == '0') ? cero2++ : uno2++;
		}
		
		(cero1 == cero2 && uno1 == uno2) ? printf("YES\n") : printf("NO\n");					
	} 
	
	return 0;
}
