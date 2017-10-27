#include<bits/stdc++.h>

using namespace std;

int main(){
	int i, j, valor, cont=0, max=0, k=0;
	
	while(scanf("%d %d", &i, &j) != EOF){
		printf("%d %d ", i, j);
		
		if(i > j){
			k = i;
			i = j;
			j = k;
		}
			
			for(int q=i; q<=j; q++){
					
				valor = q;
				
				while(valor != 1){
	
					if(valor % 2 == 0)
						valor/=2;
						
					else 
						valor = (valor * 3) + 1; 
					cont++;
				}
				if(max < cont)
					max=cont;
					cont=0;
		}
		printf("%d\n", max+1);
		cont=max=0;		
	}
	return 0;
}
