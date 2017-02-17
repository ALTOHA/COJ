#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
	int a, b, i, suma=0, suma2=0, suma3=0, suma4=0, lon1=0, lon2=0, j=0;
	char jei[100000], joy[100000], juy[100000], jai[100000];
	scanf ("%s %s",jei, joy );
	b=strlen(jei);
	a=strlen(joy);
	lon1=b;
	lon2=a;
	for (i=0; i<b; i++){
		if (jei[i]=='5'){
		jai[i]='6';
	}
		else
		jai[i]=jei[i];
		
		suma=suma+((jai[i]-'0')*pow(10,lon1-1));
	lon1--; 
	}
	lon1=b;
	for (i=0; i<b; i++){
		if (jei[i]=='6'){
			juy[i]='5';
		}
		else 
		juy[i]=jei[i];
		
		suma2=suma2+((juy[i]-'0')*pow(10, lon1-1));
		lon1--;
		
	}
	fill(jai, jai+i, 0);
	fill (juy, juy+i, 0);
	for (j=0; j<a; j++){
		if (joy[j]=='6'){
			jai[j]='5';
}
			else 
			jai[j]=joy[j];
			
			suma3=suma3+((jai[j]-'0')*pow(10, lon2-1));
			lon2--;
		}
				lon2=a;	
		for (j=0; j<a; j++){
		if (joy[j]=='5'){
			juy[j]='6';
		}
			else 
			juy[j]=joy[j];
			
			suma4=suma4+((juy[j]-'0')*pow(10, lon2-1));
			lon2--;
	}
	
	printf ("%d %d\n",suma2+suma3, suma+suma4);
	return 0;
}
