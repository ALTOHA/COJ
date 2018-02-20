#include <bits/stdc++.h>

using namespace std;

int main(){
	unsigned long long int casos, arr[100005], valor, i;
	
	arr[0] = 3, arr[1] = 11;
	for(i=2; i<=1005; i++){
		arr[i] = (3 * arr[i-2] + 2 * arr[i-1])%1000000007;
	}
	
	scanf("%u", &casos);
	
	while(casos--){
		scanf("%u", &valor);
		
		printf("%u\n", arr[valor]);
	}
	return 0;
}
