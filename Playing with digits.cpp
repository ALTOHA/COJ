#include <bits/stdc++.h>

using namespace std;

int main(){
	char digitos[100005];
	int arr[10], ascii, max = INT_MIN, max2 = 0, cont = 0, i;
	
	fill(arr, arr+10, 0);
	
	for(i=0; i<100005; i++){
		scanf("%c", &digitos[i]);
		
		if(digitos[i] == '\n')
			break;
		
		ascii = digitos[i] - 48;
		
		arr[ascii]++;
		
		if(max < arr[ascii])
			max = arr[ascii];
	}

	while(max > 0){
		for(i=1; i<=9; i++){
			if(arr[i] == max && arr[i] != 0){
				printf("%d ", i);
				arr[i] = 0;
			
			}
			
			if(max2 < arr[i] && arr[i] < max)
				max2 = arr[i];
			
			if(i == 9 && max > 0){
				max = max2;
				max2 = 0;
				i=0;
			}
		}
	}
	printf("\n");
	
	return 0;
}
