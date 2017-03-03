#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	int  tamano, i, tamdiv;
	char div[10000];
	scanf ("%d", &tamano);
	for (i=0; i<tamano; i++){
		scanf ("%s", div);
		tamdiv=strlen(div);
		(div[tamdiv-1]=='5' || div[tamdiv-1]=='0')?printf ("YES\n"):printf("NO\n");
	}
	
	return 0;
}
