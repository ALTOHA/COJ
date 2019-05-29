#include <bits/stdc++.h>

using namespace std;

int main(){
	int cant_numeros, cont = 1, num, res = 0;
	bool ac = false, ac2 = false;
	
	scanf("%d", &cant_numeros);
	
	while(cant_numeros--){
		scanf("%d", &num);
		
		if(ac == false || ac2 == false){
			
			if(num == cont){
				res++;
				cont++;
				ac2 = true;
			}
			else if(ac2 == true){
				ac = true;
			}
		}
	}
	
	printf("%d\n", res);
	
	return 0;
}
