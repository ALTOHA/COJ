#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, arr[10], checa[10], i, res[10], j;
	
	scanf("%d", &casos);
	
	while(casos--){
		for(i=0; i<10; i++)
			checa[i] = i;
		
		for(i=0; i<=9; i++)
			scanf("%d", &arr[i]);
		
		for(i=9; i>=0; i--){
			
			if(i == 9){
				res[i] = 10 - (arr[i]+1);
				checa[res[i]] = -1;
			}
			
			else{
				for(j=9; j>=0; j--){
					if(checa[j] != -1 && arr[i] == 0){
						res[i] = checa[j];
						checa[j] = -1;
						j = -1;	
					}
					
					if(checa[j] != -1)
						arr[i]--;
					
				}
			}
		}
		for(i=0; i<=9; i++)
			printf("%d ", res[i]);	
	
			printf("\n");
	}
	
	return 0;
}
