#include <bits/stdc++.h>

using namespace std;

int main(){
	stack <int> pila;
	bool acomodar;
	int num_camiones, arr[1005], i, arr2[1005], j, valor;
	
	while(scanf("%d", &num_camiones) && num_camiones != 0){
		
		acomodar = true;
		fill(arr, arr+1005, 0);
		fill(arr2, arr2+1005, 0);
		
		for(i=0; i<num_camiones; i++)
			scanf("%d", &arr[i]), arr2[i] = arr[i];
		
		sort(arr2, arr2+i);
		
		for(i = 0, j = 0; i<num_camiones; i++){

			if(arr[i] != arr2[j]){
				if(!pila.empty()){
					valor = pila.top();
			
						if(valor == arr2[j])
							pila.pop();
							
						else {
							pila.push(arr[i]);
						}
				}
				else
					pila.push(arr[i]);
			}		
			if(arr[i] == arr2[j]){
				j++;
			}
							
			
			if(i == num_camiones -1 ){
				while(!pila.empty()){
			
					valor = pila.top();
					pila.pop();
					
					if(valor == arr2[j])
						j++;
					else
						acomodar = false;
						
				}
			}
		}
		(acomodar == true) ? printf("yes\n") : printf("no\n");
	}
	return 0;
}
