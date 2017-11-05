#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int casos, i, num, sum=0;
	scanf("%lld", &casos);
	
	while(casos--){
		scanf("%lld", &num);
		
		for(i=1; i<=sqrt(num); i++){
			
			if(num % i == 0){
				sum+=i;
				
				if(num/i != i)
					sum+=num/i; 
			}	
			
		}
		
		printf("%lld\n", sum-num);
		sum=0;
	}
	
	return 0;
}
