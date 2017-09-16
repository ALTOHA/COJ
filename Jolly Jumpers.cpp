#include <cstdio>
#include <cmath>
#include <algorithm>

#define MAX 3005

using namespace std;

int main(){
	int arr[MAX], casos, valores, i=0, res=0, j, cont=0, valor_ant, replica;
	
	while(scanf("%d", &casos)!=EOF){
		replica=casos;
		for(i=0; i<casos; i++){
			if(i > 0)
				valor_ant=valores;
			
			scanf("%d", &valores);
			
			if(i > 0)
				res = abs(valores-valor_ant), arr[res] = 1;
			
		}
	
		
		for(j=1; j<replica; j++){
		
			if(arr[j]==1)
				cont++;
		
			else j = casos + 1;
		}
		
		(cont == casos-1) ? printf("Jolly\n") : printf("Not jolly\n");
		
		fill(arr, arr+replica-1, 0);
		res=cont=0;
	}
	
	return 0;
}
