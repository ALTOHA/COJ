#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, l, b, i, min, cant;
	
	scanf("%d", &casos);
	
	while(casos--){
		
		scanf("%d %d", &l, &b);
		
		(l < b) ? min = l : min = b;
		
		for(i=min; i>=1; i--){
			if(((l*b) % (i*i) ) == 0 && l % i == 0 && b % i == 0){
				cant = (l*b) / (i*i);
				break;
			}
		}
		
		printf("%d\n",cant);
	}
	
	return 0;
}
