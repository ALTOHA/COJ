#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	int a=0, b=0, c=0, z[100][100], i=0,j=0 ,p[100000], l[100000], k, t, q, h, y, r;
	
	scanf ("%d", &a);
	for (int k=0; k<a; k++){
		scanf ("%d %d",&b, &c);
		for (i=0; i<c; i++){
			for (j=0; j<b; j++){
			p[j]=l[j]=0;

				scanf ("%d", &z[i][j]);
			}
			}
			y=r=0;
	for (y=0; y<b; y++){
		for (r=0; r<c; r++){
				p[y]=p[y]+z[r][y];
				l[y]=l[y]+z[r][y];
		}
	}
		sort(p, p+y);
		q=b-1;
		
		for (h=0; h<b; h++){
			if (p[q]==l[h]){
			t=h;
		}
	}
		t++;
		printf ("%d\n", t);
			c=b=j=i=t=q=r=y=0;	
}
	return 0;

}
