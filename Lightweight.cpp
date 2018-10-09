#include <bits/stdc++.h>

using namespace std;

int main(){
	int cervezas;
	
	scanf("%d", &cervezas);
	
	if(cervezas < 2)
		printf("WRONG ANSWER\n");
	else if(cervezas > 3)
		printf("RUNTIME ERROR\n");
	else
		printf("ACCEPTED\n");
	
	return 0;
}
