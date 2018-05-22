#include <bits/stdc++.h>

using namespace std;

int main(){
	int max = 0, tamano[100000], i = 0, res = 0, j;
	char palabras[1000];

	
	while(gets(palabras) != NULL){
		tamano[i] = strlen(palabras);
		
		if(tamano[i] > max)
			max = tamano[i];
			
		i++;
		
	}
	
	for(j=0; j<i-1; j++){
		res += (tamano[j]-max)*(tamano[j]-max);
	}
	printf("%d\n", res);
	
	return 0;
}
