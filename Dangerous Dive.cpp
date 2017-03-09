#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	int sobrevivientes=0, voluntarios[10005], i=0, vol=0, sob=0;
	while(scanf ("%d %d", &vol, &sob)!=EOF){
		fill(voluntarios, voluntarios+vol, 0);
		for (i=0; i<sob; i++){
		scanf ("%d", &sobrevivientes);
			if (voluntarios[sobrevivientes-1]==0){
			voluntarios[sobrevivientes-1]=1;
			}
		}
if (vol!=sob){
			for (i=0; i<vol; i++){
			if (voluntarios[i]==0)
				printf ("%d ",i+1);
			}
			printf ("\n");
	}
	else printf ("*\n");

	}
return 0;
}
