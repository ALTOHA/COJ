#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	int a, b, i, d, f, c, q, j, l=0;
	char jei[100000], joy[100000];
	scanf ("%d", &a);
	for (i=0; i<a; i++){
		scanf ("%s %d", jei, &d);
		b=strlen(jei);
		c=b;
		if (d>b){
			do{
				b=b+c;
			}while (b<d);
		}
		f=b-d;
		for (j=f; j<c; j++){
			joy[l]=jei[j];
			l++;
		}
		for (q=0; q<f; q++){
			joy[l]=jei[q];
		l++;
		}
		for (j=0; j<c; j++){
			printf ("%c", joy[j]);
			if (j==c-1)
			printf("\n");
		}
	f=b=d=l=c=j=q=0;
	}
	
	
	return 0;
}
