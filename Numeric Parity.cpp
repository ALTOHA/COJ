#include <cstdio>

using namespace std;

int main(){
	int valor, arr[100000], d=0, valor2, cont=0;
	
	while(scanf("%d", &valor) && valor!=0){
		valor2=valor;
		
		while(valor2 != 0){
			arr[d]=valor2%2;
			d++;
			valor2=valor2/2;
		}
		printf("The parity of ");
		
		for(int i=d-1; i>=0; i--){
			printf("%d", arr[i]);
			if(arr[i] == 1)
				cont++;
		}
		printf(" is %d (mod 2).\n", cont);
		d=cont=0;
	}
	return 0;
}
