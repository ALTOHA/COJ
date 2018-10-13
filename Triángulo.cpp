#include <bits/stdc++.h>

using namespace std;

int main(){
	bool no = false;
	int  i;
	double lados[3], l[3];
	
	for(i=0; i<3; i++)
		scanf("%lf", &lados[i]);
		
	for(i=0; i<3; i++)
		scanf("%lf", &l[i]);
	
	sort(lados, lados+3);
	sort(l, l+3);
	
	for(i=0; i<3; i++){
		if(l[i] != lados[i]){
			no = true;
			break;
		}
	}
	
	if(sqrt(pow(lados[0], 2) + pow(lados[1], 2)) == lados[2] && sqrt(pow(l[0], 2) + pow(l[1], 2)) == l[2] && no == false)
		printf("YES\n");
		
	else
		printf("NO\n");
	
	
	return 0;
}
