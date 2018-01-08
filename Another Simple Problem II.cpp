#include <bits/stdc++.h>

using namespace std;

int main(){
	bool perfecto = true;
	int casos, i, rango, arr[105];
	char espacio, letra;
	
	scanf("%d", &casos);
	
	while(casos--){
		scanf("%d", &rango);
		getchar();
		
		for(i=1; i<=rango*rango; i++){
			scanf("%c", &letra);
			arr[i] = letra; 
			
			if(i % rango == 0)
				scanf("%c", &espacio);	
			
			
			if(arr[i] == arr[i-1] && i % rango != 1)
				perfecto = false;
			
				
			if(i > rango){
				if(arr[i] == arr[i-rango])
					perfecto = false;
			}
			
		}
		(perfecto == true) ? printf("YES\n") : printf("NO\n");
			
		perfecto = true;	
	}
	return 0;
}
