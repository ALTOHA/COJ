#include <bits/stdc++.h>

using namespace std;

int main(){
	int largo, ancho, uso_laser, corte[100005], i;
	
	while(scanf("%d %d", &ancho, &largo) && ancho != 0 && largo != 0){
		uso_laser=0;
		for(i=0; i<largo; i++){
			scanf("%d", &corte[i]);
			
			if(i!=0){
				if(corte[i-1] < corte[i]){
					uso_laser+=(corte[i]-corte[i-1]);
				}
			}
		}
		
		uso_laser += ancho - corte[largo-1];
		
		printf("%d\n", uso_laser);
	}
	
	return 0;
}
