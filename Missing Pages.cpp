#include <bits/stdc++.h>

using namespace std;

int main(){
	int num_paginas, pagina_perdida, hojas_p=1, hojas_f, cont=0;
	
	while(scanf("%d", &num_paginas) && num_paginas != 0){
		scanf("%d", &pagina_perdida);
		
		hojas_f = num_paginas;
		hojas_p = 1;
		
		while(cont == 0){
			if(pagina_perdida == hojas_p || pagina_perdida == hojas_p+1 || pagina_perdida == hojas_f || pagina_perdida == hojas_f-1){
				
				if(pagina_perdida != hojas_p)
					printf("%d ", hojas_p);
					
				if(pagina_perdida != hojas_p + 1)
					printf("%d ", hojas_p+1);
					
				if(pagina_perdida != hojas_f - 1)
					printf("%d ", hojas_f-1);
					
				if(pagina_perdida != hojas_f)
					printf("%d ", hojas_f);
					
				cont++;
			}
			else 
				hojas_p+=2, hojas_f-=2;  
				
		}
		printf("\n");
		cont = 0;
	}
	return 0;
}
