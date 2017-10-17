#include <bits/stdc++.h>

using namespace std;


int main(){
	int valor, potencia, arr[100000], i;
	
	while(scanf("%d", &valor) && valor != 0){
	
		for (i=1; i<100000; i++){
			arr[i] = pow(i, 2);
			
			if(valor <= arr[i] && valor > arr[i-1])
				potencia = i, i=100001; 
		}
	
	printf("%d\n", potencia);
		
	}

	return 0;
}
