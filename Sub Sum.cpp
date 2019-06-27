#include <bits/stdc++.h>

using namespace std;

int main(){
	map<long long int, long long int> suma;
	long long int num_variable, resultado, arr[100005], i, temp[100005]; 
	
	while(scanf("%lld %lld", &num_variable, &resultado) != EOF){
		suma.clear();
		fill(arr, arr+100005, 0);
		
		for(i=0; i<num_variable; i++){
			scanf("%lld", &temp[i]);
			
			if(i>0)
				arr[i] = arr[i-1] + temp[i];
			
			else
				arr[i] = temp[i];
			
			suma[arr[i]] = i;
			
		}
		
		for(i=0; i<num_variable; i++){
		
			if(suma.count(resultado) > 0){
				printf("%lld %lld\n", i+1, suma.at(resultado) + 1);
				break;
			}
			if(i == num_variable -1 )
				printf("-1\n");
				
			resultado+=temp[i];
			
		}
	}
	
	return 0;
}
