#include <bits/stdc++.h>

using namespace std;

int arr[1000000];

int main(){
	int i, j, val1, val2, cont = 0;
	fill(arr, arr+1000000, 2);

	for(i = 2; i<=1000000; i++){
		if(arr[i] != 0){
			
			arr[i] = 1;
			
			for(j=i*2; j<=1000000; j+=i){
				arr[j] = 0;
			}
		}
	}
	
	while(scanf("%d %d", &val1, &val2) && val1!=0 && val2!=0){
		for(i=val1; i<=val2; i++){
			if(arr[i] == 1)
				cont++;
		}
		printf("%d\n", cont);
		cont = 0;
	}
	return 0;
}
