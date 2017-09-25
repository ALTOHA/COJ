#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	int lluvia=0, nublado=0, soleado=0, casos, correctos=0, i, posicion=0;
	char clima[20];
	scanf("%d", &casos);
	
	for(i=1; i<=casos; i++){
		scanf("%s", clima);

		if(i!=1){
			
			if(soleado == i-1 && clima[0] == 's')
				soleado=0, correctos++;
					
			else if(clima[0] == 'r' && lluvia == i-1)
				lluvia=0, correctos++;
				
			else if(posicion == i-1 && clima[0] == 'c' && nublado!=3)
				correctos++;			
			
			else if(nublado == 3 && clima[0] == 'r')
				correctos++, nublado=0;
			
			else if(nublado == 3 && clima[0] == 'c')
				nublado --;
			
			else if(nublado == 3 && clima[0]!='r')
				nublado=0;
				
		}
		if(i==1 && clima[0] == 's'){
			correctos++, soleado=i;
			nublado = 0;
		}
			
		else if(clima[0] == 's')
			soleado=i, nublado = 0;
				
		else if (clima[0] == 'r')
			lluvia=i, nublado = 0;
				
		else if(clima[0] == 'c')
			nublado++, posicion=i;
				
	}
	
	printf("%d\n", correctos);
	
	return 0;
}
