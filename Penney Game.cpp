#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	int a=0, b=0, i=0, d=0, t=0, j=0, l=0, p=0, g=0, h=0, c=0, f=0, e=0, r=0;
	char jei[100000];
	scanf ("%d", &a);
	for (i=0; i<a; i++){
		scanf ("%d", &t);
		scanf ("%s", jei);
		b=strlen(jei);
		for (j=0; j<b; j++){
			if (j!=0){
				if (jei[j]=='H'){
					if (jei[j-1]=='T'){
						if (jei[j+1]=='H'){
							d++;
							//THH
						}
					if (jei[j+1]=='T'){
						e++;
						//THT
					}	
					}
					if(jei[j-1]=='H'){
						if (jei[j+1]=='T'){
							f++;
							//HHT
						}
						if (jei[j+1]=='H'){
							r++;
							//HHH
						}
					}
				}
					if (jei[j]=='T'){
					if (jei[j-1]=='T'){
						if (jei[j+1]=='H'){
							g++;
							//TTH
						}
					if (jei[j+1]=='T'){
						h++;
						//TTT
					}	
					}
					if(jei[j-1]=='H'){
						if (jei[j+1]=='T'){
							c++;
							//HTT
						}
						if (jei[j+1]=='H'){
							l++;
							//HTH
						}
					}
				}
				
			}
			
		}
		printf ("%d %d %d %d %d %d %d %d %d\n", t,h, g,e, d,c,l,f,r);
		t=h=e=d=c=l=f=r=g=0;
	}
	return 0;
}
