#include <bits/stdc++.h>

using namespace std;

void bin(int a, int arr[]){
	int i = 0;
	while(a>0){
		arr[i] = a%2;
		a/=2;
		i++;
	}
}

int main(){
	int casos, ultimo, servidor, pulsos, bin1[10000], bin2[10000], i, cont;
	
	scanf("%d", &casos);
	
	while(casos--){
		cont = 0;
		scanf("%d %d %d", &ultimo, &servidor, &pulsos);
		
		fill(bin1, bin1+10000, 0);
		fill(bin2, bin2+10000, 0);
		
		bin(ultimo, bin1);
		bin(servidor, bin2);
		
		for(i=0; i<100; i++){
			
			if(bin1[i] != bin2[i])
				cont++;
				
		}
		
		
		if(cont > pulsos || (cont < pulsos && (cont-pulsos) %2 != 0))
			printf("no\n");
			
		if(cont == pulsos || (cont < pulsos && (cont-pulsos) % 2 == 0))
			printf("yes\n");
		
	}
	
	
	return 0;
}
