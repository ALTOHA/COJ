#include <cstdio>
#include <cstring>
#include <ctype.h>

using namespace std;

int main(){
	char ora[1000];
	int oraciones, tamano, i, j;
	scanf ("%d", &oraciones);
		getchar();
	while (oraciones--){
		gets(ora);
		tamano=strlen(ora);
			for (i=0; i<tamano; i++){
				if (ora[i]>='A' && ora[i]<='Z')
				ora[i]=tolower(ora[i]);
				else if (ora[i]>='a' && ora[i]<='z')
				ora[i]=toupper(ora[i]);
				
				printf ("%c", ora[i]);
			}
			printf ("\n");
	}
	return 0;
}
