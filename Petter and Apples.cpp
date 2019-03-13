#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int primer_manzana, dinero, amigo_manzana, formula;
	
	scanf("%lld %lld %lld", &primer_manzana, &dinero, &amigo_manzana);
	
	
	formula = amigo_manzana*((primer_manzana*amigo_manzana) + primer_manzana)/ 2;
	
	(formula > dinero) ? printf("%lld\n", formula-dinero) : printf("0\n");
	
	return 0;
}
