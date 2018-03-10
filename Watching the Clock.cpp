#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, cont, i;
	float valor;
	
	scanf("%d", &casos);
	
	for(i=1; i<=casos; i++){
		cont = 0;
		scanf("%f", &valor);
		while(valor >= 2){
			valor/=2;
			cont++;
		}
		
		printf("Case #%d: %d\n", i, cont);
	}
	
	
	return 0;
}
