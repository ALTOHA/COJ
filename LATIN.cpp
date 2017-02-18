#include <cstring>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	int a, i, j, tamano, d=0, p=0;
	char jei[100000], joy[100000];
	scanf ("%d", &a);
	for (i=0; i<a; i++){
		scanf ("%s", jei);
		tamano=strlen(jei);
		for (j=0; j<tamano; j++){
			if (j==0 && (jei[j]=='a' || jei[j]=='e'|| jei[j]=='i' || jei[j]=='o' || jei[j]=='u')){
			d++;
			}
			if (j>=1){
				joy[p]=jei[j];
				p++;
			}
		}
		if (d==1){
	printf ("%scow\n", jei);
	}
	else {
	for (j=0; j<p; j++){
	printf ("%c", joy[j]);
}
printf ("%cow\n", jei[0]);
}
	d=p=0;
}
	return 0;
}
