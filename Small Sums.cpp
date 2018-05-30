#include <bits/stdc++.h>

using namespace std;

int main(){
	int valor_superar, num_valores, arr[10005], i, j, cont = 0;
	
	scanf("%d %d", &valor_superar, &num_valores);
	
	for(i=0; i<num_valores; i++){
		scanf("%d", &arr[i]);
	}
	
	sort(arr, arr+i);
	
	for(i=num_valores-1; i>= 0; i--){
		
		if((arr[i] + arr[0] + arr[1]) <= valor_superar)
			cont++;
			
	}
	
	printf("%d\n", cont);
	return 0;
}
