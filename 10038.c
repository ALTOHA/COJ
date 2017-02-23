#include <stdio.h>
#include <string.h>

#define MAX 3005
#define TRUE 1
#define FALSE 0 

int abs(int a){
	if (a<0)
		return a*=-1;

	return a;
}
int main(){
	int n, seq[MAX], bien, anterior, actual, i, dif;

	while (scanf ("%d", &n)!= EOF){
		bien =1;
		memset (seq, FALSE, sizeof(seq));
		scanf ("%d", &anterior);
		for (i=1; i<n; i++){
			scanf ("%d", &actual);
			dif=abs(actual-anterior);
			if (dif<=0 || dif >=n)
				bien=FALSE;
			else if (seq[dif]){
				bien=FALSE;
			}else{
				seq[dif]=TRUE;
			}
anterior=actual
		}
		(bien)?printf ("Jolly\n"): printf ("Not Jully\n");
	}
	return 0;
}