#include <bits/stdc++.h>

using namespace std;

int arr[5000000];

int main(){
	int casos, largo, ancho, i, max;
	
	scanf("%d", &casos);
	
	while(casos--){
		fill(arr, arr+5000000, 0);
		max = 0;
		scanf("%d %d", &largo, &ancho);
		if(largo != ancho){
			for(i=2; i<=sqrt(largo); i++){
				if(largo % i == 0){
					arr[i]++;
					
					if(largo / i != i)
						arr[largo/i]++;
				}
			}
			
			for(i=2; i<=sqrt(ancho); i++){
				if(ancho % i == 0){
					arr[i]++;
					
					if(arr[i] > 1){
						if(max < i)
							max = i;
					}
					
					if(ancho/i != i)
						arr[ancho/i]++;
					
					if(arr[ancho/i] > 1)
						if(max < ancho/i)
							max = i;
				}
			}
			
			if(max > 0){
				printf("%d\n", (ancho/max)*2 + (largo/max)*2);
			}
			else{
				printf("%d\n", ancho*2 + largo*2);
			}
		}
		else printf("4\n");
	}
	return 0;
}
