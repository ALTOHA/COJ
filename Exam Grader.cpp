#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	char jei[1000], joy[1000];
	float  c, d;
	int i, j, q, a, b;
	scanf ("%d %s", &a, jei);
	scanf ("%d", &b);
	for (i=0; i<b; i++){
		scanf ("%s", joy);
		for (j=0; j<a; j++){
				if (jei[j]==joy[j]){
					d++;
				}
				else if (jei[j]!=joy[j] && joy[j]!='#')
				d=d-.25;
		}
		printf ("%.2f\n", d);
		d=0;
	}

	return 0;
}
