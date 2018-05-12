#include <bits/stdc++.h>

using namespace std;


int main(){
	int hora, minuto, hora_inicio = 7, min_inicio = 0, hora_salida = 7, min_salida;
	bool examen = false;
	
	scanf("%d:%d", &hora, &minuto);
	
	
	while(hora_salida < 12){
		min_salida = min_inicio + 45;
		
		if(min_salida > 60){
			min_salida-=60;
			if(hora_salida + 1 < 12)
				hora_salida++;
			else
				break;
			
		}
		if(hora_salida == hora && hora == hora_inicio){
			if(minuto >= min_inicio && minuto < min_salida)
				examen = true;
		}
		 
		else if(hora_salida == hora && minuto < min_salida){
			examen = true;
		}
		
		else if(hora_inicio == hora && minuto >= min_inicio){
			examen = true;
		}

		min_inicio = min_salida+5;
		
		if(min_salida < 45)
			hora_inicio = hora_salida ;	
		
	}
	
	hora_inicio = 1, min_inicio = 0;
	hora_salida = 1;
	
	while(hora_salida < 6){
		min_salida = min_inicio + 45;
		
		if(min_salida > 60){
			min_salida-=60;
			if(hora_salida + 1 < 6)
				hora_salida++;
			else
				break;
			
		}
		if(hora_salida == hora && hora == hora_inicio){
			if(minuto >= min_inicio && minuto < min_salida)
				examen = true;
		}
		 
		else if(hora_salida == hora && minuto < min_salida){
			examen = true;
		}
		
		else if(hora_inicio == hora && minuto >= min_inicio){
			examen = true;
		}

		min_inicio = min_salida+5;
		
		if(min_salida < 45)
			hora_inicio = hora_salida ;	
	}	
	
	(examen == true) ? printf("Students, Surprise Quiz!\n") : printf("Students, you may go out.\n");
	
	return 0;
}
