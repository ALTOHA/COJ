#include <bits/stdc++.h>

using namespace std;

int main(){
	char palabra[10000], pal[10000], car[10000];
	map <string, int> sub;
	
	scanf("%s", palabra);
	
	for(int i=0; i<strlen(palabra); i++){
		fill(pal, pal+10000, 0);
		fill(car, car+10000, 0);	
				
		for(int j = i; j<strlen(palabra); j++){
			car[0] = palabra[j];
			 
			strcat(pal, car);
			sub[pal] = 1;
		
		}
	}
	
	cout << sub.size();
	
	return 0;
}
