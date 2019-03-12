#include <bits/stdc++.h>

using namespace std;

int main(){
	int num_corredores, total, temp, suma=0, i;
	
	scanf("%d", &num_corredores);
	
	total = (num_corredores+1)*(num_corredores)  / 2;
	
	for(i=0; i<num_corredores-1; i++){
		scanf("%d", &temp);
		suma+=temp;
	}
	
	printf("%d\n", total-suma);
	
	return 0;
}
