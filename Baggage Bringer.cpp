#include <cstdio>

using namespace std;

int main(){
	int casos, l=1, i;
	float res[1005], v1, v2, d;
	scanf ("%d", &casos);
	while (casos--){
		scanf ("%f %f %f", &v1, &v2, &d);
		res[l]=(d*2)/(v1+v2);
		l++;
	}
	for (i=1; i<l; i++){
		printf ("Case #%d: %.2f\n", i, res[i]);
	}
}
