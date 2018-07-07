#include <bits/stdc++.h>

using namespace std;

int main(){
	long long casos, l1, l2, conejos, res, i, semanas=0;
	scanf ("%lld", &casos);
	while (casos--){
		scanf ("%lld %lld %lld", &conejos, &l1, &l2);

			for (i=0; i<conejos-2; i++){
				res=(l1*l2) % 1000000;
				l1=l2 % 1000000;
				l2=res % 1000000;
			}
			semanas=(conejos*3)-2;
			printf ("At week %lld we obtain %lld new rabbits.\n",semanas, res);

	}
	return 0;
}
