#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	int godzilla[100000], mega[100000], i, j, casos, m, g;
	scanf ("%d", &casos);
		for (i=0; i<casos; i++){
		scanf ("%d %d", &g, &m);
			for (j=0; j<g; j++){
			scanf ("%d", &godzilla[j]);
			}
			sort(godzilla, godzilla+j);	
			for (j=0; j<m; j++){
				scanf ("%d", &mega[j]);
			}
				sort (mega, mega+j);
				(mega[m-1]>godzilla[g-1])?printf ("MechaGodzilla\n"):printf ("Godzilla\n");
			fill(godzilla, godzilla+g, 0);
			fill (mega, mega+m, 0);
		}
	
	return 0;
}
