#include <bits/stdc++.h>

using namespace std;

int sum[100005];

void agrega(int valor, int index, int tamano){
	while(index <= tamano){
		sum[index] += valor;
		index+= index&(-index);
	}	
}

int update(int index){
	int suma = 0;
	while(index){
		suma+=sum[index];
		index -= index&(-index);
	}
	return suma;	
}

int main(){
	int tamano, arr[100000], val_inf, val_sup, casos, i;
	
	scanf("%d", &tamano);
	
	for(i=1; i<=tamano; i++){
		scanf("%d", &arr[i]);
		agrega(arr[i], i, tamano);
	}
	scanf("%d", &casos);
	
	while(casos--){
		scanf("%d %d", &val_inf, &val_sup);
		
		printf("%d\n", update(val_sup)-update(val_inf-1));
	}
	
	return 0;
}
