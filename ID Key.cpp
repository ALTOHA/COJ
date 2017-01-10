#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	char jei[10000];
	int a, i, b, d=0, c, e, j, p, l, t;
	scanf ("%d", &a);
	for (i=0; i<a; i++){
		l=d=b=c=0;
		e=1000;
		scanf ("%s", jei);
		b=strlen(jei);
		for (j=0; j<b; j++){
			d=d+jei[j]-'0';
			
			if (j>=b-3){
				c=c+(jei[j]-'0')*e;
				e=e/10;
			}
		}
		t=d+c;
		if (t<999){
			t=t+1000;
		}
		if (t>9999 && t<20000){
			t=t-10000;
			l++;
		}
		if (t<999 && l>0 && t>99){
			printf ("0");
		}
		if (t<99 && l>0 && t>9){
			printf ("00");
		}
		if (t<9 && l>0){
			printf ("000");
		}
	printf ("%d\n", t);
	}
	
	return 0;
}
