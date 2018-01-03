#include <bits/stdc++.h>

using namespace std;

int main(){
	map <int, int> pilares;
	map <int, int> :: iterator it;
	int ancho, num_pilares, arr[500], i, j;
	
	scanf("%d %d", &ancho, &num_pilares);
	
	for(i=0; i<num_pilares; i++){
		scanf("%d", &arr[i]);
		pilares[abs(arr[i]-0)] = 1;
		pilares[abs(arr[i]-ancho)] = 1;
	}
	
	
	for(i=0; i<num_pilares; i++){
		for(j=i+1; j<num_pilares; j++){
			pilares[abs(arr[i]-arr[j])] = 1;
		}
	}
	
	for(it = pilares.begin(); it!= pilares.end(); it++)
		printf("%d ", it->first);
		
	printf("%d\n", ancho);
	return 0;
}
