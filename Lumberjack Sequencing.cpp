#include <cstdio>

using namespace std;
int main(){
	int n, i, lum[10], j, contneg=0, contpos=0, arr[100000], l=0;
	scanf ("%d", &n);
	for (i=0; i<n; i++){
		for (j=0; j<10; j++){
		scanf ("%d", &lum[j]);
		if (j>=1){
			if (lum[j]>lum[j-1])
			contpos++;
			
			else if (lum[j]<lum[j-1])
			contneg++;
			
			}
		}
		(contpos==9 || contneg==9)?arr[l]=1: arr[l]=0;
		l++;
	
		contpos=contneg=0;
	}
		printf ("Lumberjacks:\n");
		for (i=0; i<l; i++){
			(arr[i]>0)?printf ("Ordered\n"):printf ("Unordered\n");
		}
	return 0;
}
