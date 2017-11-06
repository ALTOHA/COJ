#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int casos, suma=0, int_i, int_f, i;
	
	scanf("%lld", &casos);
	
	while(casos--){
		scanf("%lld %lld", &int_i, &int_f);
		
		for(i=int_i; i<=int_f; i++){
			suma+=(i*(i+1)*(i+2));
				
		}
		
		printf("%lld\n", suma%100);
		
		suma=0;
	}
	
	return 0;
}
