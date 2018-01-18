#include <bits/stdc++.h>

using namespace std;

int main(){
	int num_asientos, i, j = 1, cont = 0, max = 0;
	char asientos[1000], tipos;
	
	fill(asientos, asientos+1000, 0);
	
	scanf("%d", &num_asientos);
	
	asientos[0] = '*';
	getchar();
	
	for(i=0; i<num_asientos; i++){
		scanf("%c", &tipos);
		
		asientos[j]	= tipos;
		
		if(tipos == 'L')
			cont++;
			
		if(tipos != 'L' || cont==2){
			j++;
			asientos[j] = '*';
			cont = 0;
		}
		j++;
	
	}
	
	for(i=0; i<strlen(asientos); i++){
		if(asientos[i] == '*')
			max++;
	}	
	
	if(max > num_asientos)
		max = num_asientos;
	
	printf("%d\n", max);
	
	return 0;
}
