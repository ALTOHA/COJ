#include <bits/stdc++.h>

using namespace std;

int main(){
	int num_cien, tamano[10000], i=0, j=0;
	float radio, pi=2*acos(0);
	
	scanf("%d", &num_cien);
	
	for(i=0; i<num_cien; i++){
		scanf("%d", &tamano[i]);
	}
	
	sort(tamano, tamano+i);
	
	for(i=num_cien-1; i>=0; i--){
		j++;
		radio += tamano[i];
		if(j == 10)
			break; 
	}
	
	radio/=(2*pi);
	
	printf("%.4f\n", radio);
	
	return 0;
}
