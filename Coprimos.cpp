#include <cstdio>

using namespace std;

int GCD(int a, int b){
	if (b==0)
	return a;	
	else GCD(b, a%b);
}

int main(){
	int numero, i, d=0, cont=0;
	scanf ("%d", &numero);
	for (i=1; i<=numero; i++){		
		d=GCD(i, numero);
		if (d==1)
		cont++;
	}
	printf ("%d\n", cont);
	return 0;
}
