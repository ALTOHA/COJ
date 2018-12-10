#include <bits/stdc++.h>

using namespace std;

int main(){
	unsigned long long int casos, chocolates, companeros, temp;
	
	scanf("%lld", &casos);
	
	while(casos--){
		scanf("%lld %lld", &companeros, &chocolates);
		temp = companeros;
		
		while(companeros--)
			chocolates = (chocolates/(temp-1)) * temp;		
		
		printf("%lld\n", chocolates);
	}
	
	return 0;
}
