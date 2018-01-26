#include <bits/stdc++.h>

using namespace std;

int main(){
	int arr[50], boton, i;
	arr[1] = 1;
	arr[2] = 2;
	scanf("%d", &boton);
	
	for(i = 3; i<=boton; i++){
		arr[i] = arr[i-1] + arr[i-2];
	}

	printf("%d %d\n", arr[boton-2], arr[boton-1]);
	
	
	return 0;
}
