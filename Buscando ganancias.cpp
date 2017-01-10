#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	int a, b, i, d[10000], p=0, j=0, l=0;
	scanf ("%d %d", &a, &b);
	for (i=0; i<a; i++){
		scanf ("%d", &d[i]);
	}
	sort (d,d+i);
	do{
		if (d[j]<0){
			l=l+d[j];
		}
		p++;
		j++;
		
	}while (p!=b);
	l=l*-1;
	printf ("%d", l);
	return 0;
}
