#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	int casos, i, j, q, tamano, ascii;
	char code[100], decode[50];
	scanf ("%d", &casos);
	getchar();
		for (i=0; i<casos; i++){
			gets(code);
			gets(decode);
			tamano=strlen(code);
				for (j=0; j<tamano; j++){
					if (code[j]>='A' && code[j]<='Z'){
					ascii=code[j];
					ascii=ascii-65;
					code[j]=decode[ascii];
					}
					else code[j]=code[j];
				}
				printf("%d %s\n",i+1, code);
		}
	return 0;
}
