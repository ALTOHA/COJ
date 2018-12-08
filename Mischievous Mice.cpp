#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, i, val1, val2, res, correcto ;
	
	scanf("%d", &casos);
	
	while(casos--){
		correcto = 0;
		
		for(i=0; i<5; i++){
			scanf("%d %d %d", &val1, &val2, &res);
			
			if(val1+val2 == res || val1-val2 == res || val1*val2 == res)
				correcto++;
			
			else if(val2 != 0){
				if(val1/val2 == res && val1%val2 == 0)
					correcto++;
				
			}
		}
		
		printf("%d\n", correcto);
	}
	
	return 0;
}
