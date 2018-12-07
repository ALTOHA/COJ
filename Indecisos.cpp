#include <bits/stdc++.h>

using namespace std;

int main(){
	int num_votantes, favor=0, contra=0, indecisos=0, i;
	char votos[1005];
	
	scanf("%d %s", &num_votantes, votos);
	
	for(i=0; i<num_votantes; i++){
		if(votos[i] == 'P')
			favor++;
			
		if(votos[i] == 'N')
			contra++;
			
		if(votos[i] == 'I')
			indecisos++;
			
	}
	
	if(favor > contra+indecisos)
		printf("SI\n");
	
	else if(favor + indecisos > contra && contra+indecisos >= favor)
		printf("INDECISOS\n");
	else
		printf("NO\n");
	
	
	return 0;
}
