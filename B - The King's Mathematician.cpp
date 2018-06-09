#include <bits/stdc++.h>

using namespace std;

int main(){
	bool cumple;
	int casos, A, C, arr[1000], cont, num_provincias, val, cont2 = 1;
	
	scanf("%d", &casos);
	
	while(casos--){
		cumple = false, cont = val = 0;
		fill(arr, arr+1000, 0);
		arr[0] = 1;
	
		scanf("%d %d %d", &num_provincias, &A, &C);
		
		while(cumple == false){
			val = (A*val+C)%num_provincias;
			
			
			if(arr[val] == 0){
				cont++;
				arr[val] = 1;
			}
			else
				break;	
		}
		printf("Case #%d: %d\n", cont2, cont+1);
		cont2++;	
	}
	return 0;
}
