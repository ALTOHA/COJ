#include <cstdio>

using namespace std;

int main(){
	int a, b, i, d, c;
	scanf ("%d", &a);
	for (i=0; i<a; i++){
	scanf ("%d  %d", &c, &d);	
		if (c!=(d+2) && c!=d && d!=(c-2))
		printf ("No Number\n");
	else{
	b=c+d;
	if (c%2!=0 && d%2!=0)
	b--;
	
	
	printf ("%d\n", b);
}
}
	return 0;
}
