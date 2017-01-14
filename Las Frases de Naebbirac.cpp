#include <cstdio>
#include <cstring>

using namespace std;
int main(){
	int a, b, i, d=0, j, l=0;
	char jei[100000], joy[100000];
	scanf ("%d", &a);
	for (i=0; i<a; i++){
		scanf ("%s %s", jei, joy);
		b=strlen(jei);
		for (j=0; j<b; j++){
			if (jei[j]!=joy[l])
			d++;
			
			l++;
		}
	printf ("%d\n", d);
	l=d=0;
	}	
	
	return 0;
}
