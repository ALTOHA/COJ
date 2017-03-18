#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int main(){
	int i, j, tamano, d=0, l=0;
	char jei[100], joy[10000];
	scanf ("%s", jei);
		tamano=strlen(jei);
			strcpy(joy, jei);
			if (tamano%2==0)
			printf ("error\n");
	
			else{
				d=tamano/2;
				l=d-1;
				printf ("%s\n", jei);
				for (i=0; i<tamano-1; i++){
					for (j=0; j<tamano; j++){
						if (i<d){
						jei[d+i]=' ';
						jei[d-i]=' ';
						}
						else{
						jei[d+l]=joy[d+l];
						jei[d-l]=joy[d-l];
						}
					}
					if (i>=d)
					l--;
				printf ("%s\n", jei);
				}
			}
	
	return 0;
}
