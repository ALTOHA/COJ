#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, ca, cont=0;
	double factor, PA, PJ, G, A, TA, TR;
	char jugador[100];

	map <double, string> fifa;
	map <double, string> :: iterator it;
	
	scanf("%d", &casos);
	ca = casos;
	while(casos--){
		scanf("%s %lf %lf %lf %lf %lf %lf", jugador, &PA, &PJ, &G, &A, &TA, &TR);
		factor = log10(PA) + PJ + (2*G) + A - (TA + 2 * TR);
		
		fifa[factor] = jugador;
	}
	
	for(it = fifa.begin(); it != fifa.end(); it++){
		if(cont == ca - 1)
			cout << it->second << "\n";
		
		cont ++;
	}
	return 0;
}
