#include <bits/stdc++.h>

using namespace std;

int main(){
	int anio1, anio2, mes1, mes2, dia1, dia2;
	
	scanf("%d-%d-%d", &anio1, &mes1, &dia1);
	scanf("%d-%d-%d", &anio2, &mes2, &dia2);
	
	
	if(anio1 > anio2)
		printf("1\n");
	
	else if(anio2 > anio1)
		printf("2\n");
	
	else{
		if(mes1 > mes2)
			printf("1\n");
		
		else if(mes2 > mes1)
			printf("2\n");
			
		else{
			if(dia1 > dia2)
				printf("1\n");
				
			else if(dia2 > dia1)
				printf("2\n");
			else
				printf("-\n");
		}
	}
	return 0;
}
