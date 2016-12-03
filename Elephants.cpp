#include <cstdio>
#include <algorithm>

using namespace std;
int main(){
	int a=0, j=0,i=0, b=0,c=0, d[100000], q=0, o=0, l=0;
	scanf ("%d", &a);
	for (i=0; i<a; i++){
		b=c=l=o=0;
		scanf ("%d %d", &b, &c);
		for (j=0; j<b; j++){
			scanf ("%d", &d[j]);
		}
		sort (d, d+j);
		for (q=0; q<b; q++){
			o=o+d[q];
			if (o<c){
			l++;
		}
		}
		printf ("%d\n", l);
	}
	
	return 0;
}
