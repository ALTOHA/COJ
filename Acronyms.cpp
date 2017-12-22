#include <bits/stdc++.h>

using namespace std;

int main(){
	int l=1, cont, cont2=0, i;
	char nombre[10000], iniciales[1000], nombre2[100000], primera_palabra[100];
	
	while(scanf("%s",primera_palabra) != EOF){
		
		iniciales[0] = primera_palabra[0];
		
		getchar();
		
		gets(nombre);
		
		gets(nombre2);
		
		for(i=0; i<strlen(nombre); i++){
			
			if(i==0 || nombre[i-1]==' '){
				iniciales[l] = nombre[i];			
				l++;
			}
			
		}
		
		cont = l;
		l=0;
		
		for(i=0; i<strlen(nombre2); i++){
			
			if(i==0 || nombre2[i-1] == ' '){
				
				if(iniciales[l] == nombre2[i])
					l++, cont2++;
			
				else
					cont2 = -1, i = strlen(nombre2)+1;
			
			}
		}
		
		(cont2 == cont) ? printf("yes\n") : printf("no\n");
		
		cont2 = 0;
		l = 1;
		
	}
	
	return 0;
}
