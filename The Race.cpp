#include <cstdio>

using namespace std;
int main(){
	int a, b, i, c, d;
	scanf ("%d", &a);
	for (i=0; i<a; i++){
		scanf ("%d %d", &b, &c);
		d=(c/b)*(b-1);
		printf("%d\n", d);
	}	
		
	return 0;
}
