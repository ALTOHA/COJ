#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int main(){
	char jei[100000];
	int i, tamano;
	scanf ("%d", &tamano);
	scanf ("%s", jei);
	sort(jei, jei+tamano);
	printf ("%c", jei[(tamano-1)/2]);
	
	return 0;
}
