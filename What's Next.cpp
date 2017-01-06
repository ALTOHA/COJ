#include <cstdio>

using namespace std;
int main(){
	float a, b, c, d, f, g, h;
	do{
		h=d=f=g=a=b=c=0;
		scanf ("%f %f %f", &a, &b, &c);
		if (a!=0 || b!=0 || c!=0){
		d=b/a;	
		f=b-a;
		if (f==(c-b)){
				h=c+f;
				printf ("AP %.0f\n", h);
			}
			
			else if (d==(c/b)){
				g=c*d;
				printf ("GP %.0f\n", g);
			}
		}
	}while (a!=0 || b!=0 || c!=0);
	
	return 0;
	}
