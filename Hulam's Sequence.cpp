#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, arr[10005], query, i;
	
	arr[1] = 1, arr[2] = 2;
	arr[3] = 4;
	
	for(i=4; i<=10000; i++){
		arr[i] = arr[i-1]+3;
	}
	scanf("%d", &casos);
	
	
	while(casos--){
		scanf("%d", &query);
		
		printf("%d\n", arr[query]);
	}
	
	return 0;
}
