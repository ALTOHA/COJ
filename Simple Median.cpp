#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	long long casos, arr[99999], i;
	double numero;
	do{
	scanf ("%d", &casos); 
		if (casos!=0){
			for (i=0; i<casos; i++){
				scanf ("%lld", &arr[i]);
			}
			sort(arr, arr+i); 
			if (casos%2==0){
				numero=arr[casos/2]+arr[(casos/2)-1];
				numero=numero/2;
				printf ("%.1lf\n", numero);
			}
			else {
				numero=arr[casos/2];
				printf ("%.1lf\n", numero);
			}
		}
	}while (casos!=0);
	return 0;
}
