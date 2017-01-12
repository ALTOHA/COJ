#include <cstdio>
#include <cstring>
using namespace std;

int main(){
char jei[100000], joy[100000], juy[100000];
int a=0,b=0 ,i, d=0, f=0, j, c=0, p=0, l;
scanf ("%s %s", jei, joy);
a=strlen(jei);
b=strlen(joy);
for (i=0; i<a; i++){
	juy[i]=jei[i];
}
f=i;
for (j=0; j<b; j++){
	juy[f]=joy[j];
	f++;
}
c=strlen(juy);
d=c-1;
l=d;
for (i=0; i<c; i++){
	if (juy[i]==juy[d])
	p++;
	
	d--;
}
if (p==c || p==l)
printf ("Yes\n");

else printf ("No\n");
	return 0;
}
