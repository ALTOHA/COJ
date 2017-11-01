#include <bits/stdc++.h>

using namespace std;

int main(){
	int num_bolas, n, valor[100], i, j, res[100], cont=0;
	
	while(scanf("%d %d", &n, &num_bolas) && n!=0 && num_bolas !=0){
		
		fill(res, res+100, 0);
		
		for(i=0; i<num_bolas; i++){
			scanf("%d", &valor[i]);
		}
		
		for(i=0; i<num_bolas; i++){
			for(j=i; j<num_bolas; j++){
				res[abs(valor[i]-valor[j])] = 1;
			}
		}
		
		for(i=0; i<=n; i++){
			if(res[i]!=1)
				cont=1, i=n+1;
		}
		
		(cont == 0) ? printf("Y\n") : printf("N\n");
		cont = 0;
	}
	
	return 0;
}
