#include <bits/stdc++.h>

using namespace std;

int main(){
	int informaticos, fisicos, matematicos, aulasinfo, aulasfis, aulasmat, sobra = 0;
	
	scanf("%d %d %d", &informaticos, &fisicos, &matematicos);	
	
	if(informaticos % 10 != 0) {
		aulasinfo = informaticos / 10 + 1;
		sobra += 10 - (informaticos % 10);
	}
	else{
		 aulasinfo = informaticos / 10;
	}
	
	if(fisicos % 14 != 0){
		aulasfis = fisicos / 14 + 1;
		sobra += 14 - (fisicos % 14);
	} 
	else{
		aulasfis = fisicos / 14;
	}
	
	if(sobra >= matematicos)
		aulasmat = 0;
		
	else{
		matematicos -= sobra;
		(matematicos % 30 != 0) ? aulasmat = matematicos / 30 + 1 : aulasmat = matematicos / 30;
	}
		
	printf("%d %d %d\n", aulasinfo, aulasfis, aulasmat);
	
	return 0;
}
