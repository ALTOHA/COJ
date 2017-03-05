#include <cstdio>

using namespace std;
int main(){
	int publicaciones=0, res=0, paga=0;
		scanf ("%d %d", &publicaciones, &res);
		paga=publicaciones*(res-1);
		printf ("%d\n", paga+1);
	return 0;
}
