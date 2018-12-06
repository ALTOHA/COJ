#include <bits/stdc++.h>

using namespace std;

int main(){
	char expresion[1005];
	int cont = 0;
	scanf("%s", expresion);
	
	for(int i=0; i<strlen(expresion); i++){
		if(expresion[i] == '+' && expresion[i+1] == '+')
			cont++;
		if(expresion[i] == '-' && expresion[i+1] == '-')
			cont--;
	}
	printf("%d\n", cont);
	return 0;
}
