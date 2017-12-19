#include <bits/stdc++.h>

using namespace std;

int main(){
	bool verifica = false;
	int num_vacas, presupuesto, regalos[10000], i, cont=0, total=0, precio[10000], envio[10000], pos;
	
	scanf("%d %d", &num_vacas, &presupuesto);
	
	for(i=0; i<num_vacas; i++){
		scanf("%d %d", &precio[i], &envio[i]);
		regalos[i] = precio[i]+envio[i];
	}
	sort(regalos, regalos+i);

	
	for(i=0; i<num_vacas; i++){
		total += regalos[i];
		
		if(total > presupuesto && verifica == false){
			
			for(int j=0; j<num_vacas; j++){
				
				if(regalos[i] - precio[j] == envio[j])
					pos = j, j = num_vacas;	
			
			}
			total-=(precio[pos]/2);
			
			if(total > presupuesto)
				break;
				
			else 
				cont++;
				
			verifica = true;
		}
		
		else if(verifica == true)
			break;
			
		else 
			cont++;
		
	}
	printf("%d\n", cont);
	
	return 0;
}
