#include <bits/stdc++.h>

using namespace std;

int main(){
	bool arr, aba, izq, der;
	int x[205], y[205], puntos, cont = 0, i, j;
	
	scanf("%d", &puntos);
	
	for(i=0; i<puntos; i++){
		scanf("%d %d", &x[i], &y[i]);
	}
	for(i=0; i<puntos; i++){
		arr = aba = der = izq = false;
		for(j=0; j<puntos; j++){
			if(x[i] == x[j] && y[i] < y[j])
				arr = true;
			if(x[i] == x[j] && y[i] > y[j])
				aba = true;
			
			if(y[i] == y[j] && x[i] > x[j])
				der = true;
				
			if(y[i] == y[j] && x[i] < x[j])
				izq = true;				
		}
		
		if(arr == true && izq == true && aba == true && der == true)
			cont++;
		
	}
	
	printf("%d\n", cont);
	
	return 0;
}
