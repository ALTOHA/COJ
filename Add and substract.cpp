#include <bits/stdc++.h>

using namespace std;

long long int valores[1000005];

int main(){
	map <long long int, long long int> hash;
	map <long long int, long long int> :: iterator it;
	long long int num_alumnos, total = 0,i;
	
	scanf("%lld", &num_alumnos);
	
	for(i=0; i<num_alumnos; i++){
		scanf("%lld", &valores[i]);
		
		hash[valores[i]]++;
	}
	
	
	for(i=0; i<num_alumnos; i++){
		for(it=hash.begin(); it != hash.end(); it++){
			if(abs(it->first - valores[i]) > 1){
				total += (it->first - valores[i])*it->second;
			}
			
		}
		hash[valores[i]]--;
	}
	
	printf("%lld\n", total);
	
	
	return 0;
}
