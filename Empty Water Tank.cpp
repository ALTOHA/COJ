#include <bits/stdc++.h>

using namespace std;

int main(){
	unsigned long long int casos, capacidad, minutos, sec, cont;

	scanf("%llu", &casos);

	while(casos--){

		scanf("%llu %llu", &capacidad, &minutos);

		sec = minutos*(1+minutos)/2;

		if(capacidad <= sec)
			printf("1\n");

		else{
			capacidad-=sec;
			cont = (capacidad/minutos);

			if(capacidad % minutos != 0)
				cont++;

			printf("%llu\n", cont+1);
		}
	}

	return 0;
}
