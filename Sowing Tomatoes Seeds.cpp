#include <cstdio>
#include <algorithm>

using namespace std;

unsigned long long int tomates[1000001];

int main(){
	unsigned long long int  cantidad, i, cont=0, l=0, diferencia;
	scanf ("%u", &cantidad);
	
	for (i=0; i<cantidad; i++){
		scanf ("%u", &tomates[i]);
	}
	sort(tomates, tomates+i);
	
	for (i=0; i<cantidad; i++){
		if (i==0){
			diferencia=tomates[i+1]-tomates[i];
			l++;
		}
		else if (i!=0){
			((tomates[i]-tomates[i-1]) == (diferencia)) ? cont++ : i=cantidad+1; 
		}
				
	}
	(cont == cantidad-1)?printf("YES\n"): printf ("NO\n");
	return 0;
}