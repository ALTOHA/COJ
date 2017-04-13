#include <cstdio>
#include <cstring>
#include <ctype.h>

using namespace std;

int main(){
	char coco[100];
	int tamano, i, j, casos;
	scanf ("%d", &casos);
	while(casos--){
		scanf ("%s", coco);
		tamano=strlen(coco);
			for (i=0; i<tamano; i++){
				if (coco[i]>='A' && coco[i]<='Z')
				coco[i]=tolower(coco[i]);
				else if (coco[i]>='a' && coco[i]<='z')
				coco[i]=toupper(coco[i]);
				printf ("%c", coco[i]);
			}
			printf ("\n");
	}
	return 0;
}
