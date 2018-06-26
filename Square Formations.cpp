#include <bits/stdc++.h>

using namespace std;

int main(){
	map <int, int> cuadrado;
	map <int, int> :: iterator it;
	
	int casos, i, num, comp;
	
	for(i=1; i<=1005; i++)
		cuadrado[i*i];
	
	scanf("%d", &casos);
	
	for(i=1; i<=casos; i++){
		scanf("%d", &num);
		
		for(it=cuadrado.begin(); it!=cuadrado.end(); it++){
			comp = it->first - num;

			if(cuadrado.count((comp/2)+num) == 1 && comp > 0 && comp % 2 == 0){
				printf("Case %d: %d\n", i, comp);
				break;
			}
		}
	}
	
	return 0;
}
