#include <bits/stdc++.h>

using namespace std;

int main(){
	int num_carteles, enojo, arr[10005], diferencia = INT_MAX, repito=0, j=0 , i, letra[10005], res = 0, pos = -1;
	char cartel[10005], otros[10005], caracter;
	
	fill(letra, letra+10005, 0);
	
	scanf("%s %c %d %d", cartel, &caracter, &enojo,  &num_carteles);
	
	for(i=0; i<num_carteles; i++){
		scanf("%s", otros);
		arr[i] = strlen(otros);
	}
	
	for(i=0; i<strlen(cartel); i++){
		if(cartel[i] == caracter)
			letra[j]++;
		
		else if(letra[j] > 0 || i == strlen(cartel)-1)
			j++;
			
		if(i == strlen(cartel)-1)
			j++;
		
	}

	for(int q=0; q<j; q++){	
		for(i=0; i<num_carteles; i++){
			
			if(letra[q] >= arr[i]){
				
				if(diferencia > letra[q]-arr[i]){
					diferencia = letra[q]-arr[i];
					pos = i;
				}
			}
			
			if(i == num_carteles-1){
				
				if(diferencia != INT_MAX){
					res+=diferencia;
					arr[pos] = 0;
				}
				
				if(diferencia == INT_MAX)
					res+=letra[q];
			}
		
		}
		diferencia = INT_MAX;		
	}

	printf("%d\n",res * enojo);
	
	return 0;	
}
