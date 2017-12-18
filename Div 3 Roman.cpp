#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, i, conversor=0;
	char romano[100];
	
	scanf("%d", &casos);
	
	while(casos--){
		scanf("%s", romano);
		
		for(i=0; i<strlen(romano); i++){
		
			if(romano[i] == 'I'){
				if(romano[i+1] == 'X')
					conversor += 9, i++;
				
				else if(romano[i+1] == 'V')
					conversor += 4, i++;
				
				else if(romano[i+1] == 'L')
					conversor += 49, i++;
				
				else if(romano[i+1] == 'C')
					conversor += 99, i++;
				
				else if(romano[i+1] == 'D')
					conversor += 499, i++;
				
				else if(romano[i+1] == 'M')
					conversor += 999, i++;
				
				else
					conversor++;
			}
			else if(romano[i] == 'X'){

				if(romano[i+1] == 'C')
					conversor += 90, i++;
					
				else if(romano[i+1] == 'L')
					conversor += 40, i++;
					
				else if(romano [i+1] == 'D')
					conversor += 490, i++;
					
				else if(romano[i+1] == 'M')
					conversor += 990, i++;
					
				else
					conversor += 10;	
			}
			else if(romano[i] == 'V')
				conversor += 5;	
			
			else if(romano[i] == 'L')
				conversor += 50;
				
			else if(romano[i] == 'C'){
				
				if(romano[i+1] == 'D')
					conversor += 400, i++;
					
				else if(romano[i+1] == 'M')
					conversor += 900, i++;
					
				else
					conversor += 100;
			}
			else if(romano[i] == 'D')
				conversor += 500;
			
			else if(romano[i] == 'M')
				conversor += 1000;
					
		}
		
		(conversor % 3 == 0) ? printf("YES %d\n", conversor) : printf("NO %d\n", conversor);
		conversor=0;
	}
	
	return 0;
}
