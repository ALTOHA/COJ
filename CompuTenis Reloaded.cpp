#include <bits/stdc++.h>

using namespace std;

int main(){
	int partidos, sets, minima, dif_oponentes, A=0, B=0, cont=0, cont2=0;
	char resul_partidos[100005];
	
	scanf("%d %d %d %d %s", &partidos, &sets, &minima, &dif_oponentes, resul_partidos);
	
	for(int i=0; i<partidos; i++){
		if(resul_partidos[i] == 'A')
			cont++;
		else 
			cont2++;
		if(cont - cont2 >= dif_oponentes && cont >= minima)
			A++, cont=cont2=0;
		else if(cont2 - cont >= dif_oponentes && cont2 >= minima)
			B++, cont=cont2=0;
	}
	
	printf("%d %d\n", A, B);
	return 0;
}
