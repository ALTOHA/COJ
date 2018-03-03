#include <bits/stdc++.h>

using namespace std;

int tree[500000];

void agrega(int tamano, int index, int valor){
	while(index <= tamano){
		tree[index]+=valor;
		
		index+=index&(-index);
		
	}
}

int update(int index){
	int suma = 0;
	while(index){
		suma+=tree[index];
		index -= index&(-index);
	}
	return suma;
}

int main(){
	int num_articulos, arr[500000], casos, i, rango_min, rango_max, opcion;
	
	scanf("%d %d", &num_articulos, &casos);
	fill(tree, tree+500000, 0);
	for(i=1; i<=num_articulos; i++)
		scanf("%d", &arr[i]), agrega(num_articulos, i, arr[i]);
	
	while(casos--){
		scanf("%d %d %d",&opcion, &rango_min, &rango_max);
		
		if(opcion == 1){
			arr[rango_min]+=rango_max;
			agrega(num_articulos, rango_min, rango_max);
			printf("1 %d\n", arr[rango_min]);
		}
		else if(opcion == 2 || opcion %2 == 0)
			printf("%d %d\n",opcion, update(rango_max) - update(rango_min-1));
		
		else
			printf("Error\n");
	}	
	
	
	return 0;
}
