#include <cstdio>

using namespace std;

int main(){
	long long numero, i, j, primorial=1;
	do{
		scanf ("%lld", &numero);
			if (numero!=0){
			for (i=1; i<=numero; i++){
				if ((i==2 || i==3 || i==5 || i==7)||(i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0))
				primorial=primorial*i;
			}
			
				printf ("%lld\n", primorial);
				primorial=1;
			}	
	}while (numero!=0);
	return 0;
}
