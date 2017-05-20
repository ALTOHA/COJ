#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	int casos, i, j, arr[10000], puntuacion[1000], suma, l=1;
	scanf ("%d", &casos);
	while (casos--){
		for (i=0; i<10; i++){
			scanf ("%d", &puntuacion[i]);
		}
		sort(puntuacion, puntuacion+i);
		for (i=1; i<9; i++){
			arr[l]+=puntuacion[i];
		}
		l++;
	}
	for (i=1; i<l; i++){
		printf ("%d %d\n", i, arr[i]);
	}
	sort(arr, arr+l);
	printf ("%d\n", arr[l-1]);
	
	return 0;
}
