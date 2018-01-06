#include <bits/stdc++.h>

using namespace std;

int main(){
	map <string, int> anagrama;
	map <string, int> :: iterator it;
	int num_palabras;
	char palabra[15];
	
	scanf("%d", &num_palabras);
	
	while(num_palabras--){
		scanf("%s", palabra);
		sort(palabra, palabra+strlen(palabra));
		
		if(anagrama.size() == 0){
			anagrama[palabra] = 1, printf("0\n");
		}
		
		else{
			if(anagrama.count(palabra) == 1){
				cout << anagrama.at(palabra) << "\n";
			}
			else
				printf("0\n");
				
			anagrama[palabra]++;
		}

	}
	
	return 0;
}
