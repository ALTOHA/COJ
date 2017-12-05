#include <bits/stdc++.h>

using namespace std;

int arr[1000000];

int main(){
	int casos, i, j, valor, cont=0;
	fill(arr, arr+1000000, -1);
	
	for(i=2; i<=1000000; i++){
		if(arr[i] != 0){
		
			arr[i] = 1;
		
			for(j=i*2; j<=1000000; j+=i){
		
				arr[j] = 0;
			}
		}
	}
	
	scanf("%d", &casos);
	
	while(casos--){
		scanf("%d", &valor);
		
		for(i=2; i<=valor; i++){
			if(arr[i] == 1 && valor%i  == 0)
				cont++;
		}
		
		printf("%d\n", cont);
		cont = 0;
	}
	return 0;
}
