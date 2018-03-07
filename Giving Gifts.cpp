#include <bits/stdc++.h>

using namespace std;

int main(){
	int num_personas, arr[105], i, pos;
	
	scanf("%d", &num_personas);
	
	for(i=1; i<=num_personas; i++){
		scanf("%d", &pos);
		
		arr[pos] = i;
	}
	
	for(i=1; i<=num_personas; i++)
		printf("%d ", arr[i]);
		
	printf("\n");
	
	return 0;
}
