#include <bits/stdc++.h>

using namespace std;

int main(){
	int arr[2014], arr2[2014], casos, anio, i=0, min = INT_MAX, media=0, cont = 0, j=0, anios, num;
	map <int, int>esta;
	map <int, int> :: iterator it;
	
	scanf("%d", &casos);
	
	while(casos--){
		scanf("%d %d", &anios, &num);
		esta[anios] = num;
	}
	
	for(it = esta.begin(); it!= esta.end(); it++){
		arr[i] = it->first;
		arr2[i] = it->second;
		i++;
	}
	
	while(cont < i-1){
		for(j=cont; j<cont+3; j++){
		
			if(arr[j] == arr[j+1]-1 || j == i-1)
				media +=  arr2[j];
			
			else{
				media = INT_MAX;
				j = cont+3;
			}

			if(j == cont+2){
				if(min >= media){
					min = media;
					anio = arr[j];
				}		
			}
			
		}		
		cont++;
		media = 0;

	}	
	printf("%d %d %d\n", anio-2, anio-1, anio);
	
	return 0;
}
