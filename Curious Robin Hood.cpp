#include <bits/stdc++.h>

using namespace std;

int tree[100005];

void agrega(int valor, int index, int tamano){
	while(index <= tamano){
		tree[index] += valor;
		index += index&(-index);
	}
}

int update(int index){
	int suma = 0;
	while(index){
		suma += tree[index];
		index -= index&(-index);		
	}
	return suma;	
}

int main(){
	int casos, num_sacos, query, arr[100005], i, index, opcion, cont = 1, pos, res, valor, suma = 0;
	
	scanf("%d", &casos);
	
	while(casos--){

		fill(tree, tree+100005, 0);
	
		scanf("%d %d", &num_sacos, &query);
		
		for(i=1; i<=num_sacos; i++){
			scanf("%d", &arr[i]);
			agrega(arr[i], i, num_sacos);
		}
			
		printf("Case %d:\n", cont);
		cont++;		
		
		while(query--){
			
			scanf("%d", &opcion);
			
			if(opcion == 1){
				scanf("%d", &pos);
				printf("%d\n", arr[pos+1]);
				
				agrega(-arr[pos+1], pos+1, num_sacos);
				arr[pos+1] = 0;

			}
			else if(opcion == 2){
				scanf("%d %d", &pos ,&valor);
				
				agrega(valor, pos+1, num_sacos);
				arr[pos+1] += valor;
			}
			else{
				scanf("%d %d", &pos, &valor);
				
				printf("%d\n", update(valor+1) - update(pos));
			}

		}

	}
	
	return 0;
}
