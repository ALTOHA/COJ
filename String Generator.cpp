#include <bits/stdc++.h>

using namespace std;

int main(){
	bool a = false, b=false;
	int cont1 = 0, cont2 = 0, i;
	char palabra[100000];
	
	scanf("%s", palabra);
	
	for(i=0; i<strlen(palabra); i++){
		if(palabra[i] == 'a' && a == false){
			cont1++;
			a = true;
			b = false;		
		}
		else if(palabra[i] == 'b' && b == false){
			cont2++;
			b = true;
			a = false;
		}
	}
	if(cont1 == 0 || cont2 == 0)
		printf("0\n");
	else
		(cont1 > cont2) ? printf("%d\n", cont2) : printf("%d\n", cont1);
	
	return 0;
}
