#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int casos, index, i, num;
	
	scanf("%lld",&casos);
	
	
	while(casos--){
		scanf("%lld",&index);

		if(index % 2 == 0){
			printf("%lld\n",((index/2)-1)*500 + 442);
		}
		else{
			printf("%lld\n",(index/2)*500 + 192);
		}
		
	}
	
	return 0;
}
