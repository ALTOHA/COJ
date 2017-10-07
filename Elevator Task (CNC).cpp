#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, piso, tiempo=0, pi=1;
	
	scanf("%d", &casos);
	
	while(casos--){
		scanf("%d", &piso);
		
		tiempo+=abs(pi-piso);
		pi=piso;
		
	}
	tiempo += pi-1;
	
	printf("%d\n", tiempo);
	return 0;
}
