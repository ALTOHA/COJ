#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	long long a, i, b, j, d[100000], c, l=0;
	char jei[10000];
	scanf ("%lld", &a);
	for (i=0; i<a; i++){
		scanf ("%lld %lld %s", &b, &c, jei);
		for (j=0; j<b; j++){
			scanf ("%d", &d[j]);
		}
		sort (d, d+j);
		if (jei[0]=='i'){
			for (j=0; j<c; j++){
				printf ("%d\n", d[j]);
				l=l+d[j];	
				}
		}
		else if (jei[0]=='r'){
			for (j=b; j>b-c-1; j--){
				printf ("%d\n", d[j]);
				l=l+d[j];
			}
		}
		printf ("%lld\n", l);
		l=0;
		fill(d, d+b, 0);
	}
	return 0;
}
