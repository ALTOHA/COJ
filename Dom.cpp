#include <bits/stdc++.h>

using namespace std;

int main(){
	bool uno = false, odiar = false;
	int pensionados, num_canales, canal, favorito[100005], odia[100005], i, j, empieza, cont = 0, emp, arr[100005];
	
	scanf("%d %d %d", &pensionados, &num_canales, &canal);
	
	fill(arr, arr+100005, 0);
	
	for(i = 0; i<pensionados; i++){
		scanf("%d %d", &favorito[i], &odia[i]);
		
		if(odia[i] == canal && uno == false){
			empieza = i;
			arr[i] = 1;
			uno = odiar = true;
		}
	}
	
	while(odiar == true){
		canal = favorito[empieza];
		cont++;
		
		for(i=0; i<pensionados; i++){
			if(odia[i] == canal){
				empieza = i;
				if(arr[i] == 1){
					cont = -1;
					break;
				}
				else
					arr[i] = 1;
				
				break;
			}
			
			if(i == pensionados-1){
				odiar = false;
			}
		}
		
		if(cont == -1){
			break;
		}
	}
	
	printf("%d\n", cont);
	
	return 0;
}
