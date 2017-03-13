#include <cstdio>

using namespace std;

int main(){
	int angulo=0;
	while (scanf ("%d", &angulo)!=EOF){
		(angulo%6==0)?printf("Y\n"):printf ("N\n");	
}
	return 0;
}
