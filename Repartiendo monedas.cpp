#include <bits/stdc++.h>

using namespace std;

int main(){
	int hijas, monedas;
	
	scanf("%d %d", &hijas, &monedas);
	
	if((hijas*monedas) % (hijas-1) == 0)
		printf("%d %d\n", (hijas*monedas) / (hijas-1) - 1, (hijas*monedas) / (hijas-1));
		
	else
		printf("%d %d\n", (hijas*monedas) / (hijas-1), (hijas*monedas) / (hijas-1));	
	
	return 0;
}
