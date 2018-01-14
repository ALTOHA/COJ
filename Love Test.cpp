#include <bits/stdc++.h>

using namespace std;

int main(){
	map <double, string> stand;
	map <double, string> :: iterator it;
	int participantes ;
	char nombres[100000], nombre1[1000], nombre2[10000];
	double puntaje, max, min, num_concursos;
	
	scanf("%d", &participantes);
	
	while(participantes--){
		
		scanf("%s %s %lf %lf %lf", nombre1, nombre2, &num_concursos, &min, &max);
		strcat(nombres, nombre1);
		strcat(nombres, " ");
		strcat(nombres, nombre2);
		puntaje = ((min+max)/2) * num_concursos;
		
		stand[puntaje] = nombres;
		
		fill(nombres, nombres+100000, 0);
	}
	
	for(it = stand.begin(); it != stand.end(); it++){
		cout<<it->second<<" ";
		printf("%.2lf\n",it->first);
	}
		
	return 0;
}
