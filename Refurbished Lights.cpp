#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, min, arr[1005], N, i, sum , cont = 0;
	
	scanf("%d", &casos);
	
	while(casos--){
		cont++;
		sum = 0, min = INT_MAX;
		scanf("%d", &N);
		
		for(i=0; i<N; i++){
			scanf("%d", &arr[i]);
			
			if(arr[i] < min)
				min = arr[i];
		}
		
		for(i=0; i<N; i++){
			sum+=arr[i]-min;
		}
		
		printf("Case #%d: %d %d\n", cont, min, sum/N);
	}
	return 0;
}
