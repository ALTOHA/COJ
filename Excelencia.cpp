#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
	int a, l, i, j, d[100000], p[100000];
	scanf ("%d", &a);
	for (i=0; i<a; i++){
		scanf ("%d", &d[i]);
	}
	l=a-1;
	sort (d,d+i);
	for (j=0; j<a; j++){
		p[j]=d[j]+d[l];
		l--;
	}
	sort(p, p+j);
	printf ("%d\n", p[0]);
	return 0;
}
