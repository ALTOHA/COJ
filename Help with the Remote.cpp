#include <cstdio>

using namespace std;
int main(){
	int a, b, i, j, d;
	scanf ("%d", &d);
	for (i=0; i<d; i++){
		j=0;
		scanf ("%d %d", &a, &b);
		if (a>b){
		do{
			a=a/2;
			j++;
		}while (a>b);
	}
		if (b>a){
			j=j+(b-a);
		}
	printf ("%d\n", j);
	}
	return 0;
}
