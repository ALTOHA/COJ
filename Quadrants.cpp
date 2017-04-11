#include <cstdio>

using namespace std; 

int main(){
	float x, y;
	do{
		scanf ("%f %f", &x, &y);
		if (x>0 && y>0)
		printf ("Q1\n");
		else if (x<0 && y>0)
		printf ("Q2\n");
		else if (x<0 && y<0)
		printf ("Q3\n");
		else if (x>0 && y<0)
		printf ("Q4\n");
		else printf ("AXIS\n");
		
	}while (x!=0 || y!=0);
	return 0;
}
