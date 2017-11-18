#include<bits/stdc++.h>

using namespace std;

int main(){
	int num_def, num_ata, def[10], ata[10], maxa=INT_MAX, maxd=0;
	
	while(scanf("%d %d", &num_ata, &num_def) && num_ata!=0 && num_def!=0){
		for(int i=0; i<num_ata; i++){
			scanf("%d", &ata[i]);
			
			if(maxa > ata[i])
				maxa = ata[i];
		}
		for(int j=0; j<num_def; j++){
			scanf("%d", &def[j]);
		}
		sort(def, def+num_def);	
		maxd = def[1];
		
		(maxa < maxd) ? printf("Y\n") : printf("N\n");
		
		maxa = INT_MAX;
		maxd = 0;
		
	}
	return 0;
}
