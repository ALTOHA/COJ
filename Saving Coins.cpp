#include <bits/stdc++.h>

using namespace std;

int main(){
	map<string, int> dias;
	map <string, int> ::iterator it;
	
	dias["Monday"] = 1;
	dias["Tuesday"] = 2;
	dias["Wednesday"] = 1;
	dias["Thursday"] = 2;
	dias["Friday"] = 1;
	dias["Saturday"] = 3;
	dias["Sunday"] = 3;
	
	int casos, monedas;
	string inicio;
	scanf("%d", &casos);
	
	while(casos--){
		monedas = 0;
		cin >> inicio;
		
		for(it = dias.begin(); it != dias.end(); it++){

			if(inicio.compare(it->first) == 0){
				monedas+=it->second*53;
			}
			else{
				monedas+= it->second*52;
			}
		}
		
		printf("%d\n", monedas);
	}
	
	return 0;
}
