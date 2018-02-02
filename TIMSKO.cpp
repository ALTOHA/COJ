#include <bits/stdc++.h>

using namespace std;

int main(){
	int num_ninos, num_ninas, dif_ninos=0, dif_ninas=0, equipos, menos_equipos;
	float equ, intercambio;
	
	scanf("%d %d %f", &num_ninas, &num_ninos, &intercambio);
	
	if(num_ninas < 2 || num_ninos < 1)
		printf("0\n");
	
	else{
		dif_ninas = num_ninas % 2;	
		num_ninas /= 2;
			
		if(num_ninas >= num_ninos)
			dif_ninas += (num_ninas - num_ninos)*2, equipos = num_ninos;
		else
			dif_ninos += num_ninos - num_ninas, equipos = num_ninas;
			
		
		if(intercambio <= dif_ninos + dif_ninas)
			printf("%d\n", equipos);
		
		else{
			intercambio -= (dif_ninos + dif_ninas);
			equ = intercambio / 3 ; 
			menos_equipos = equ;
			
			if(menos_equipos != equ)
				menos_equipos++;
			
			(equipos - menos_equipos > 0) ? printf("%d\n", equipos - menos_equipos) : printf("0\n");
		}
	}
	
	
	return 0;
}
