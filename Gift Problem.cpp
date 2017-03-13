#include <cstdio>

using namespace std;

int main(){
    int x, y, i, j=0, l=0;
	scanf ("%d %d", &x, &y);
	for (i=0; i<x*y; i++){
    	if (j==0 || j%3==0)
    	printf ("O");

    	else if (j==1 || (j-1)%3==0)
    	printf ("I");

    	else printf ("E");
    
		j++;
    	if (j==y+l){
		l++;
    	printf ("\n");
    	j=l;	
    	}
	}
return 0;
}
