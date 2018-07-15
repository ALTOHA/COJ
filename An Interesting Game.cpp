#include <bits/stdc++.h>

using namespace std;

int main(){
	int num_fichas, fichas;
	
	scanf("%d", &num_fichas);
	
	for(int i = 0; i< num_fichas; i++){
		scanf("%d", &fichas);
	}
	
	if(num_fichas == 1)
		printf("Tie\n");
	
	else{
		(num_fichas % 2 == 0) ? printf("First\n") : printf("Second\n");
	}
	return 0;
}
