#include <bits/stdc++.h>

using namespace std;

int main(){
	int tamano, arr[105], i, valor;
	
	scanf("%d", &tamano);
	
	for(i=0; i<tamano; i++)
		scanf("%d", &arr[i]);
	
	for(i=0; i<tamano; i++){
		if(i == 0)
			printf("%d ", arr[0]);
		else{
			arr[i]*=(i+1);
			valor = arr[i]-arr[i-1];
			printf("%d ", valor);
		}
	}
	printf("\n");
	
	return 0;
}
