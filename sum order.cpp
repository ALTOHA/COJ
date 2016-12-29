#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int main(){
	int a, b, c[10000],i, j, p=0;
	char jei[10000];
	
	scanf ("%s",jei);
	b=strlen(jei);
	for (i=0; i<b; i++){
	if (jei[i]=='3' || jei[i]=='1' || jei[i]=='2'){
		c[p]=jei[i]-'0';
		p++;
	}	
}
		sort(c, c+p);
		for (j=0; j<p; j++){
			printf ("%d", c[j]);
			if (j<p-1)
			printf ("+");
			
			else printf ("\n");
		}
	return 0;
}
