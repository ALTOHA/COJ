#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	char par[100];
	int i, j, casos, arr[100000], numero, pos, l;
	scanf ("%d", &casos);
		for (i=0; i<casos; i++){
			scanf ("%d %s %d", &numero, par, &pos);
			for (j=1; j<=numero; j++){
				if (par[0]=='e'){
					if (j%2!=0){
					arr[l]=j;
					l++;
					}
				}
				else {
					if (j%2==0){
						arr[l]=j;
						l++;
					}
				}
			}
			printf ("%d\n", arr[pos-1]);
			l=0;
		} 
	return 0;
}
