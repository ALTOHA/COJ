#include <cstdio>
#include <cstring>

using namespace std;
int main(){
	long long a, b, i, j, d=0;
	char jei[10000], joy[10000];
	scanf ("%s %s", jei, joy);
	a=strlen(jei);
	b=strlen(joy);
	
	for (i=0; i<a; i++){
		for (j=0; j<b; j++){
			d=d+((jei[i]-'0')*(joy[j]-'0'));
		}
	}
	printf ("%lld\n", d);
	return 0;
}
