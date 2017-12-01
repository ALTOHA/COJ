#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, i, l, cont=0, arr[1000], q=0, p=0, j, cont2=0, bi=0;
	char palabra[1000];
	
	scanf("%d", &casos);
	
	while(casos--){
		q = cont = cont2 = bi= 0;
		fill(arr, arr+1000, 0);
		
		scanf("%s", palabra);
		
		l=strlen(palabra)-1;
		
		for(i=0; i<strlen(palabra); i++){
		
			if(palabra[i] == palabra[l])
				cont++;
				
			l--;
			
			if(palabra[i] == palabra[0])
				arr[q] = i, q++;
			
		}
		
		if(cont == strlen(palabra))
			printf("palindrome\n");
			
		
		else{
			for(i=0; i<q; i++){
				
				l = arr[i];
				cont = cont2 = 0; 
				
				for(j=0; j<=arr[i]; j++){
					
					if(palabra[j] == palabra[l])
						cont++;
					
					else 
						j = arr[i] + 1;
				
					l--;
				}
				
				if(cont == arr[i] + 1){
					
					l = strlen(palabra)-1;
					
					for(j=arr[i]+1; j<strlen(palabra); j++){
						
						if(palabra[j] == palabra[l])
							cont2++;
							
						else
							j = strlen(palabra);	
						
						l--;
							
					}
				}
				
				if((cont2 == (strlen(palabra) - arr[i]- 1)) && cont2 != 0){
					bi = 1, i = q;
				}
			}
		(bi == 1) ? printf("bi-palindrome\n") : printf("non-palindrome\n");
		bi = 0;
		}
	}
	
	return 0;
}
