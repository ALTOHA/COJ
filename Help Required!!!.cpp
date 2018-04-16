#include <bits/stdc++.h>

using namespace std;

int main(){
	map <int, int> num;
	map <int, int> :: iterator it;
	
	int casos, valor;
	
	scanf("%d", &casos);
	
	while(casos--){
		scanf("%d", &valor);
		
		num[valor]++;
		
		if(num[valor] == 2)
			num.erase(valor);
	}
	
	for(it = num.begin(); it!= num.end(); it++)
		printf("%d\n", it->first);
		
	return 0;
}
