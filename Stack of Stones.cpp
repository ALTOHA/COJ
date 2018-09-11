#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, arr[1000], i, min, num;
	
	scanf("%d", &casos);
	
	while(casos--){
		min = 0;
		scanf("%d", &num);
		
		for(i=0; i<num; i++)
			scanf("%d", &arr[i]);
		
		sort(arr, arr+num);
		
		for(i=0; i<num-1; i++)
			min += arr[i];
			
		printf("%d\n", min);
		
	}
	
	return 0;
}
