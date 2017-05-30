#include <cstdio>
#include <cmath>

using namespace std;

int main(){
	int casos, x, p1, p2, p3, i, total=0;
	scanf ("%d", &casos);
	scanf ("%d", &x);
	while (casos--){
		scanf ("%d %d", &p1, &p2);
		if (abs(p1-p2)>x){
			scanf ("%d", &p3);
			total+=p3;
		}
		else{
			(p1>p2)?total+=p1:total+=p2; 
		}
	}
	printf ("%d\n", total);
	return 0;
}
