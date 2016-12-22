#include <cstdio>

using namespace std;

int main(){
	int a, b[1000], i, l=0, d=0;
	do{
		d=l=0;
		
		scanf("%d", &a);
		if (a!=-1){
		for (i=0; i<a; i++){
			scanf ("%d", &b[i]);
			d=d+b[i];
			if (d%100==0){
				l++;
			}
		}
		printf ("%d\n", l);	
		}
	}while (a!=-1);
	return 0;
}
