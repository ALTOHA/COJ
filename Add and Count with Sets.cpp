#include <bits/stdc++.h>

using namespace std;

int sum[1000005], arr[1000005];

void agrega(int valor, int index, int tamano){
	while(index <= tamano){
		sum[index] += valor;
		index+=index&(-index);
	}
}

int update(int index){
	int suma = 0;
	while(index){
		suma+=sum[index];
		index-=index&(-index);
	}
	
	return suma;
}

int main(){
	int casos, tamano, cont = 0, op, val, maximo = INT_MIN;
	
	scanf("%d", &casos);
	
	fill(arr, arr+1000005,0);
	
	while(casos--){
		scanf("%d", &op);
		
		if(op == 1){
			scanf("%d", &val);
			arr[val]++;
			if(val > maximo)
				maximo = val;
			agrega(1, val, 1000000);
		}
		
		else{
			
			scanf("%d %d", &val, &op);
			
			printf("%d\n", update(op) - update(val-1));
		}
	}
	
	
	return 0;
}
