#include <bits/stdc++.h>

using namespace std;

int main(){
	bool cheater;
	int casos, arr[30], ascii, l, i;
	char palabra1[10000], palabra2[10000], palabra3[10000], res[10000];
	
	scanf("%d", &casos);
	
	while(casos--){
		cheater = false;
		fill(arr, arr+30, 0);
		l=0;
		
		scanf("%s %s %s", palabra1, palabra2, palabra3);
	
		for(i=0; i<strlen(palabra1); i++){
			ascii = palabra1[i];
			
			arr[ascii-65]=1;
		}
		for(i=0; i<strlen(palabra2); i++){
			ascii = palabra2[i];
			
			if(arr[ascii-65] == 0){
				cheater = true;
				break;
			}
			else
				arr[ascii-65] = 2;
		}
		if(cheater == false){
			
			for(i=0; i<strlen(palabra3); i++){
				ascii = palabra3[i];
			
				if(arr[ascii-65] == 0){
					cheater = true;
					break;
				}
				else
					arr[ascii-65] = 2;
				}
		}
			
		if(cheater == true)
			printf("CHEATER\n");
		else{
			for(i=0; i<strlen(palabra1); i++){
				ascii = palabra1[i];
				
				if(arr[ascii-65] == 1){
					res[l] = palabra1[i];
					l++;
					arr[ascii-65] = 3;
				}
			}
			
			sort(res, res+l);
			
			for(i=0; i<l; i++)
				printf("%c", res[i]);
				
			printf("\n");
		}	
			
	}
	
	return 0;
}
