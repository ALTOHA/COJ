#include <bits/stdc++.h>

using namespace std;

int arr[4567890] = {0};

int main(){
	int numeros, i, j, cont = 0;
	
	for(i=2; i<=4567890; i++){
		if(arr[i] == 0){
			cont++;
			arr[i]=cont;
			for(j=i*2; j<=4567890; j+=i){
				arr[j]=-1;
			}
		}
	}
	
	
	for(i=0; i<10; i++){
		scanf("%d", &numeros);
		
		if(arr[numeros] != -1)
			printf("%d\n", arr[numeros]);
			
		else{
			for(j=numeros-1; j>=2; j--){
				if(arr[j] != -1){
					printf("%d\n", arr[j]);
					break;
				}
			}
		}
	}
	
	
	return 0;
}
