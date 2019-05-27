#include <bits/stdc++.h>

using namespace std;

int main(){
	int num_productos, precio[100005], num_query, query, i, gato;
	
	scanf("%d", &num_productos);
	
	for(i=0; i<num_productos; i++){
		scanf("%d", &precio[i]);
	}
	
	scanf("%d", &num_query);
	
	while(num_query--){
		scanf("%d", &query);
		gato = precio[query-1] / 5;
		
		(precio[query-1] % 5 == 0) ? printf("%d\n", gato) : printf("%d\n", gato+1);
	}

	return 0;
}
