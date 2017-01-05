#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
	long long a, i, j, c[100000], d=0, p=0, l=0, q=0, z=0, y=0, jei;
	scanf ("%lld", &jei);
do{
	z=jei;
	i=0;
	do{
		c[i]=(jei%10);
		jei=jei/10;
		i++;
	}while (jei>0);
sort (c, c+i);
q=i;
p=i-1;
for (j=0; j<q; j++){
	l=l+(c[j]*(pow(10, p)));
	p--;
}
a=z-l;
y++;
z=a;
jei=a;
l=0;
}while (a!=0);
printf ("%lld\n", y);
	return 0;
}
