#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	int marcos, palos[10000], cont=0, i, j, arr[10000];
	while(scanf ("%d", &marcos)!=EOF){
			for (i=0; i<marcos; i++){
				scanf ("%d", &palos[i]);
					if (arr[palos[i]]==0){
					arr[palos[i]]=1;
					}
					else if (arr[palos[i]]==1){
					arr[palos[i]]=0;
					cont++;
					}
			}
			printf ("%d\n", cont/2);
			fill(arr, arr+10000, 0);
			fill(palos, palos+i, 0);
			cont=0;
	}
	return 0;
}
