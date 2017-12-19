#include <bits/stdc++.h>

using namespace std;

int main(){
	char bolas[3], bolas2[3], bianka, williams;
	
	scanf("%s %s", bolas, bolas2);
	
	if(bolas[0] == 'B' && bolas[1] == 'B' && bolas[2] == 'B')
		bianka = 'r';
		
	else if(bolas[0] == 'W' && bolas[1] == 'W' && bolas[2] == 'W')
		bianka = 's';
		
	else if((bolas[0] == 'B' && bolas[1] == 'W' && bolas[2] == 'W') || (bolas[0] == 'W' && bolas[1] == 'B' && bolas[2] == 'W') || (bolas[0] == 'W' && bolas[1] == 'W' && bolas[2] == 'B'))
		bianka = 'p';
		
	else if((bolas[0] == 'W' && bolas[1] == 'B' && bolas[2] == 'B') || (bolas[0] == 'B' && bolas[1] == 'W' && bolas[2] == 'B') || (bolas[0] == 'B' && bolas[1] == 'B' && bolas[2] == 'W'))
		bianka = 'p';
	
	
	
	if((bolas2[0] == 'B' && bolas2[1] == 'W' && bolas2[2] == 'W') || (bolas2[0] == 'W' && bolas2[1] == 'B' && bolas2[2] == 'W') || (bolas2[0] == 'W' && bolas2[1] == 'W' && bolas2[2] == 'B'))
		williams = 's';
		
	else if((bolas2[0] == 'W' && bolas2[1] == 'B' && bolas2[2] == 'B') || (bolas2[0] == 'B' && bolas2[1] == 'W' && bolas2[2] == 'B') || (bolas2[0] == 'B' && bolas2[1] == 'B' && bolas2[2] == 'W'))
		williams = 'r';
		
	else if(bolas2[0] == 'B' && bolas2[1] == 'B' && bolas2[2] == 'B')
		williams = 'r';
		
	else if(bolas2[0] == 'W' && bolas2[1] == 'W' && bolas2[2] == 'W')
		williams = 's';
	

	if((bianka == 's' && williams == 'p') || (bianka == 'r' && williams == 's') || (bianka == 'p' && williams == 'r')){
		printf("Bianka won with ");
			
		if(bianka == 's')
			printf("Scissors\n");
			
		else if(bianka == 'p')
			printf("Paper\n");
			
		else
			printf("Rock\n");
				 
		printf("Williams lost with ");
		
		if(williams == 's')
			printf("Scissors\n");
			
		else if(williams == 'p')
			printf("Paper\n");
			
		else
			printf("Rock\n");
	}
	
	else if((williams == 's' && bianka == 'p') || (williams == 'r' && bianka == 's') || (williams == 'p' && bianka == 'r')){
		printf("Williams won with ");
			
		if(williams == 's')
			printf("Scissors\n");
			
		else if(williams == 'p')
			printf("Paper\n");
			
		else
			printf("Rock\n");
				 
		printf("Bianka lost with ");
		
		if(bianka == 's')
			printf("Scissors\n");
			
		else if(bianka == 'p')
			printf("Paper\n");
			
		else
			printf("Rock\n");
	}
	
	return 0;
}
