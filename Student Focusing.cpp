#include <bits/stdc++.h>

using namespace std;

int main(){
	int num_estudiantes, i;
	double promedio = 0, concentracion, menor = 1000000, mayor = 0;
	
	scanf("%d", &num_estudiantes);
	
	for(i=0; i<num_estudiantes; i++){
		scanf("%lf", &concentracion);
		promedio += concentracion;
		
		if(menor > concentracion)
			menor = concentracion;
			
		if(mayor < concentracion)
			mayor = concentracion;
	}
	
	promedio /= num_estudiantes;
	
	
	if(abs(promedio - mayor) > abs(promedio - menor)){
		printf("Low\n");
	}
	else if(abs(promedio-mayor) == abs(promedio - menor)){
		printf("Middle\n");
	}
	else
		printf("High\n");
	
	
	
	return 0;
}
