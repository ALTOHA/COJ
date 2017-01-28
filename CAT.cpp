#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	float t=0, l=0, s=0;
	int a=0, i=0, b=0, j=0, q=0, x=0, k=0;
	char jei[100000];
	scanf ("%d", &a);
	for (i=0; i<a; i++){
	scanf ("%s", jei);
	b=strlen(jei);
	for (j=0; j<b; j++){
		if (jei[j]=='C'){
			for (q=j; q<b; q++){
				if (jei[q]=='A'){
				k=q;
			for (x=k; x<b; x++){
				if (jei[x]=='T'){
				l++;
			}
		}
		}
	}
	}
		}
	printf ("%.0f\n", l);
	t=l=k=0;
}
	
	return 0;
}
