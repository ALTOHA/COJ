#include <bits/stdc++.h>

using namespace std;

int arr[1000000];

int main(){
	int casos, numero, max = INT_MIN, i, numero_respuesta, j;
	arr[1]=0;
	
		for(i=2; i<=1000000; i++){
			arr[i]++;
			for(j=i*2; j<=1000000; j+=i){
				arr[j]++;
			}		
		}
	
	scanf("%d", &casos);
	
	while(casos--){
		scanf("%d", &numero);
		
		for(i=1; i<=numero; i++){
		
			if(arr[i] > max)
				max = arr[i], numero_respuesta = i;
		
		}
	printf("%d\n", numero_respuesta);
	max = INT_MIN;
	}
	
	return 0;
}
