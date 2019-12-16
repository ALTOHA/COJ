#include <bits/stdc++.h>

using namespace std;

long long int arr[1000005];

int main(){
	long long int num_proyectos, suma= 0, maximo = 0, i;
	
	map<long long int, long long int> tiempo;
	map<long long int, long long int> :: iterator itlow, it;
	
	scanf("%lld", &num_proyectos);
	
	for(i=0; i<num_proyectos; i++){
		scanf("%lld", &arr[i]);
		
		tiempo[arr[i]]++;
		
		if(maximo < arr[i])
			maximo = arr[i];
		
	}
	
	for(i=0; i<num_proyectos; i++){
		if(arr[i] >= maximo){
			itlow = tiempo.lower_bound(maximo-1);
			maximo = itlow->first;
		}
		else
			suma+=arr[i];
	}
	
	
	
	printf("%lld\n", suma);
	
	return 0;
}
