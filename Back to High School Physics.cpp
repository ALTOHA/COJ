#include <cstdio>
#include <cmath>

using namespace std;

int main(){
	int tiempo, velocidad, distancia;
	while(scanf ("%d %d",&velocidad, &tiempo )!=EOF){
		distancia=(velocidad*tiempo*2);
		printf ("%d\n", distancia);
	}
	
	return 0;
}
