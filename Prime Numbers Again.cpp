#include <bits/stdc++.h>

using namespace std;

int arr[1000000];
int main(){
	int i, j, casos, valor;
	fill(arr, arr+1000000, 2);
	
	for(i=2; i<=1000000; i++){
	
		if(arr[i]!=0){	
			arr[i] = 1;
			
			for(j=i*2; j<=1000000; j+=i){
				arr[j] = 0;
			}
		}
		
	}
		
	scanf("%d", &casos);
	
	while(casos--){
		scanf("%d", &valor);
		
		if(arr[valor] == 1 || arr[valor] == 2)
			printf("%d %d\n", valor, valor);
		else{
			for(i=valor; i>=1; i--){
				if(arr[i] == 1){
					printf("%d ", i);
					break;
				}
			}
			for(i=valor; i<=1000000; i++){
				if(arr[i] == 1){
					printf("%d\n", i);
					break;
				}
			}
		}
			
	}
	return 0;
}
