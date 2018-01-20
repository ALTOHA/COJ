#include <bits/stdc++.h>

using namespace std;

int main(){
	bool yes = false;
	int sabe, hacer, ang_sabe[25], angulo, i, j, sum_ang = 0;
	
	scanf("%d %d", &sabe, &hacer);
	
	for(i=0; i<sabe; i++)
		scanf("%d", &ang_sabe[i]);
		
	for(i=0; i<hacer; i++){
		scanf("%d", &angulo);
		
		
		for(j=0; j<sabe; j++){
			sum_ang = ang_sabe[j];
			while(sum_ang % 360 != 0){

				if(((sum_ang - angulo ) %360 == 0) || (sum_ang + angulo) % 360 == 0 || ((angulo/ang_sabe[j]) * ang_sabe[j]) == 360) {
					yes = true;
					j = sabe;
					sum_ang = 360;
				}
				else	
					sum_ang+=ang_sabe[j];	
			}	
		}
		(yes == true) ? printf("YES\n") : printf("NO\n"),
		sum_ang = 0;
		yes = false;
	}
	return 0;
}
