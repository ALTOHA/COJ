#include <cstdio>
#include <cstring>

using namespace std;

int main(){
char jei[1000000];
int a=0, b=0, e=0, i=0, o=0, u=0, j=0;
while (scanf ("%s", jei) != EOF){
b=strlen(jei);
for (i=0; i<b; i++){
	if (jei[i]=='a'|| jei[i]=='A'){
		a++;
	}
		if (jei[i]=='o'|| jei[i]=='O'){
		o++;
	}
		if (jei[i]=='i'|| jei[i]=='I'){
		j++;
	}
		if (jei[i]=='e'|| jei[i]=='E'){
		e++;
	}
		if (jei[i]=='u'|| jei[i]=='U'){
		u++;
	}
	
}
}
printf ("%d %d %d %d %d\n", a, e, j, o, u);	

	return 0;
}
