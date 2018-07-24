#include <bits/stdc++.h>

using namespace std;

int main(){
	bool puede;
	int casos, arr[1500], i, cont;
	
	while(scanf("%d", &casos) && casos != 0){
		puede = true;
		cont = 0;
		for(i=0; i<casos; i++)
			scanf("%d", &arr[i]);
			
		sort(arr, arr+i);
		
		for(i=0; i<casos; i++){
			if(i == 0){
				if(arr[0] > 200){
					puede = false;
					break;
				}
			}
			if(arr[i] - arr[i-1]  > 200){
				puede = false;
				break;
			}
			
		}
		
		if(1440 - arr[casos-1] > 100)
			puede = false;
			
		(puede == false) ? printf("IMPOSSIBLE\n") : printf("POSSIBLE\n");		
	}
	
	return 0;
}
