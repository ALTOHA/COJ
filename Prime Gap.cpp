#include<bits/stdc++.h>

using namespace std;

int arr[1300000];

int main(){
	int numero, i, j, cont = 0;
	
	fill(arr, arr+1300000, -1);
	
	for(i=2; i<= 1300000; i++){
		if(arr[i]!= 0){
			arr[i] = 1;
	
			for(j=i*2; j<=1300000; j+=i){
				arr[j] = 0;	
				
			}
		}
	}
	while(scanf("%d", &numero) && numero != 0){
		if(arr[numero] == 1)
			printf("0\n");
			
		else{
			for(i=numero; i<=1300000; i++){
				if(arr[i] == 0)
					cont++;
				else break;
			}
			for(i=numero; i>=0; i--){
				if(arr[i] == 0)
					cont++;
				else break;
			}
		printf("%d\n", cont);
		}
		cont = 0;
	}
	return 0;
}
