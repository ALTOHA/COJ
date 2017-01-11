#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;

int main(){
	char jei[100000], joy[100000];
	long long a=0, b=0, c=0, i=0, d=0;
	do{
		scanf ("%s", jei);
		if (jei[0]!='0'){	
		b=strlen(jei);
		c=b;
		for (i=0; i<b; i++){
			d=d+(jei[i]-'0')*(pow(2, c)-1);
			c--;
		}
		printf ("%lld\n", d);
			b=c=d=0;
	}
}while (jei[0]!='0');
	return 0;
}
