#include <cstdio>

using namespace std;

int main(){
	int a=0, b=0, i=0, d[100000], e=0, f=0, l=0, j=0, k=0, h=0;
	scanf ("%d", &a);
	for (i=0; i<a; i++){
		scanf ("%d", &d[i]);
		b=b+d[i];
	}
	e=b*.45;
	f=b*.40;
	h=b*.10;
	for (i=0; i<a; i++){
		if (d[i]>=e)
		l++;
	}
	for (i=0; i<a; i++){
		for (j=0; j<a; j++){
			if (d[i]!=d[j]){
			if (d[i]>=f && d[i]>=h+d[j]){
			k++;
		}
		}
		}
	}
	if (l>0 || k==a-1)
	printf ("1\n");
	
	else printf ("2\n");
	return 0;
}
