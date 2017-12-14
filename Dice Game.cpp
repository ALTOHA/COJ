#include <bits/stdc++.h>

using namespace std;

int main(){
	int gunner, emma, suma1=0, suma2=0, i;
	
	for(i=0; i<4; i++){
		scanf("%d", &gunner);
		suma1+=gunner;
	}
	for(i=0; i<4; i++){
		scanf("%d", &emma);
		suma2+=emma;
	}
	if(suma1 > suma2)
		printf("Gunnar\n");
		
	else if(suma1 < suma2)
		printf("Emma\n");
		
	else
		printf("Tie\n");
	return 0;
}
