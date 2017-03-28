#include  <cstdio>

using namespace std;

int main(){
	int casos, i, j;
	double boletos, reembolso;
	scanf ("%d", &casos);
	for (i=0; i<casos; i++){
		for (j=0; j<10; j++){
			scanf ("%lf", &boletos);
			reembolso+=boletos*.85;
		}
		printf ("%.3lf\n", reembolso);
		reembolso=0;
	}
	
	return 0;
}
