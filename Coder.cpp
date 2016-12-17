#include <cstdio>

using namespace std;

int main(){
	int d;
	float a, b, c;
	scanf ("%f", &a);
	b=(a/2)*a;
	d=b;
	if (b-d>0)
	b=b+.5;
	
	printf("%.0f", b);
	return 0;
}
