#include <cstdio>

using namespace std;

int main(){
	int casos, vacia, vacia_calle, costo, cont=0, total, cont2=0;

	scanf("%d", &casos);
	
	while(casos--){
		scanf("%d %d %d", &vacia, &vacia_calle, &costo);
		if(costo == 1 || (vacia == 0 && vacia_calle == 0) || (vacia+vacia_calle < costo))
			printf("0\n");
		else{
			total = vacia+vacia_calle;
			
			while(total >= costo){
				
				cont2 += total/costo;				
				cont = total % costo;				 
				total/=costo;
				total += cont;
				
			}
			
			printf("%d\n", cont2);
		}
		cont2=cont=0;
	}
	
	return 0;
}
