#include <cstdio>

using namespace std;

int main(){
	int n, cont=1;
	scanf ("%d", &n);
	while (n!=1){
		n=n/2;
		cont++;
	}
	printf ("%d\n", cont);
	return 0;
}
