#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int casos, i, num, sum=0, raiz;
	scanf("%lld", &casos);
	
	while(casos--){
		scanf("%lld", &num);
		
		for(i=1; i<=sqrt(num); i++){
			if(num % i == 0 && (num / i) != i)
				sum+=i, sum += num/i;
			
			if(sqrt(num) == i)
				sum+=i;
		}
		
		printf("%lld\n", sum-num);
		sum=0;
	}
	
	return 0;
}
