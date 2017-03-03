#include <cstdio>
#include <cstring>
using namespace std;
int main(){
	int a=0, b=0, d=0, i=0, f=0, j=0, g=0, h=0;
	char c;
	scanf ("%d", &a);
	for (i=1; i<=a*2; i++){
		scanf ("%c %d", &c,&b);
		if (c=='A'){
			d=1;
		}
		if (c=='B'){
			d=2;
		}
		if (c=='C'){
			d=3;
		}
		if (c=='D'){
			d=4;
		}
		if (c=='E'){
			d=5;
		}
		if (c=='F'){
			d=6;
		}
		if (c=='G'){
			d=7;
		}
		if (c=='H'){
			d=8;
		}
		if (c=='I'){
			d=9;
		}
		j=b+d;
		f=b*d;
		g=b*2;
		h=d*2;
		if (g>=10){
		g=g-10;
		h=h+1;	
		}
		if (i%2==0){
		printf("%d%d%d%d%d%d\n",d,b,j,f,h,g);
}
j=f=d=h=g=0;	
	}	
	return 0;
}
