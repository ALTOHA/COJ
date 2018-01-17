#include <bits/stdc++.h>

using namespace std;

int main(){
	int num_semillas, arr[100000], i, semilla, max=INT_MIN, dias = 0;
	
	scanf("%d", &num_semillas);
	
	semilla = num_semillas;
	
	for(i = 0; i<num_semillas; i++)
		scanf("%d", &arr[i]);
		
	
	sort(arr, arr+i);
	
	for(i=num_semillas-1; i>=0; i--){
		arr[i]-=semilla;
		
		if(arr[i] > max)
			max = arr[i];
		semilla--;		
	}
	
	dias = num_semillas+max;
	
	printf("%d\n", dias+2);
	
	return 0;
}
