#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int main(){
	char jei[100000];
	int tamano;
	scanf ("%s", jei);
	tamano=strlen(jei);
	sort(jei, jei+tamano);
	printf ("%s", jei);
	printf ("\n");
	return 0;
}
