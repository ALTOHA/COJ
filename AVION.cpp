#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	int i, fbi[10], j, arr, l=0;
	char FBI[100000];
	for (i=0; i<5; i++){
		scanf ("%s", FBI);
		arr=strlen(FBI);
		for (j=1; j<=arr; j++){
			if (FBI[j]=='B' && FBI[j-1]=='F' && FBI[j+1]=='I'){
			fbi[l]=i+1;
			l++;
		}
		}
	}
	if (l==0){
		printf ("HE GOT AWAY!\n");
	}
	else {
	for(i=0; i<l; i++){
		printf ("%d",fbi[i]);
		(i==l-1)?printf ("\n"):printf (" ");
	}
}
	return 0;
}
