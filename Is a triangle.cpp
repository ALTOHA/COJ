#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int casos, valor, i, var1;
	
	scanf("%lld", &casos);
	
	while(casos--){
		scanf("%lld", &valor);
		valor*=2;
		
		var1 = sqrt(valor);
		
		(var1*var1 + var1 == valor) ? printf("%d\n", var1) : printf("-1\n");
		
	}
		
	return 0;
}
