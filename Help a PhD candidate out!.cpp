#include <bits/stdc++.h>

using namespace std;

int main(){
	bool ad;
	int casos, i, cont;
	char suma[100], a[100], b[100];
	
	scanf("%d", &casos);
	
	while(casos--){
		ad = false, cont = 0;
		fill(a, a+100, 0);
		fill(b, b+100,0);
		
		scanf("%s", suma);
		
		if(suma[0] == 'P')
			printf("skipped\n");
		else{
			for(i=0; i<strlen(suma); i++){
				
				if(suma[i] == '+')
					ad = true, cont = 0;
				
				if(suma[i] != '+' && ad == false){
					a[cont] = suma[i];
					cont++;
				}
				if(suma[i] != '+' && ad == true){
					b[cont] = suma[i];
					cont++;
				}
			}

			printf("%d\n", atoi(a) + atoi(b));
		}
	}
	
	return 0;
}
