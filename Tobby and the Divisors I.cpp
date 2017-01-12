#include <cstdio>
#include <algorithm>

using namespace std; 
int main(){
	int a, b, i, j, k, d[100000], l[100000], p=0, g, f=0;
	scanf ("%d", &a);
	for (i=0; i<a; i++){
		scanf ("%d", &b);
		for (j=1; j<=b; j++){
			for (k=1; k<=b; k++){
				if (j%k==0){
				p++;
				}
				
			}
			d[j]=p;
			l[j]=p;
			p=0;
		}
		sort (d, d+j);
		j=1;
		for (j=1; j<=b; j++){
			if (l[j]==d[b]){
			f=j;
			j=b+2;
		}
		}
		printf ("%d\n", f);
		
		j=f=p=0;
	}
	return 0;
}
