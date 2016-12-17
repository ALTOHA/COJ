#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	int a, b=0, i, c=0;
	char jei[1000];
	scanf ("%d %s", &a, jei);
	for (i=0; i<a; i++){
		if (jei[i]>='a' && jei[i]<='z')
		b++;
		
		else if (jei[i]>='A' && jei[i]<='Z')
		c++;
	}
	printf ("%d %d", c, b);
	return 0;
}
