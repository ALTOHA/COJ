#include <bits/stdc++.h>

using namespace std;

int main(){
	int valor, arr[105], i, ultimo, cont, res, res2;
	
	while(scanf("%d", &valor) && valor != 0){
		
		cont = ultimo = res = 0;
		
		while(ultimo == 0){
			
			fill(arr, arr+105, 0);
			res++, res2 = res;
			cont = 0;
			arr[1] = 1;
			for(i=1; i<=valor; i++){
				
				if(arr[i] == 0)
					res2--;
					
				if(arr[i] == 0 && res2 <= 0){
					arr[i] = 1;
					res2 = res;
					cont++;
				}
				
				if(i == valor && cont < valor-1)
					i = 0;
					
				if(arr[13] == 1 && cont < valor-1)
					break;
					
				if(arr[13] == 1 && cont == valor-1)
					ultimo = res, i=valor+1;
				
			}
		}
		printf("%d\n", ultimo);
	}
	return 0;
}
