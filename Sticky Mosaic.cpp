#include <bits/stdc++.h>

using namespace std;

int main(){
	bool cumple;
	int casos, num_caso=0,  necesita, num_colores, nec[105], color[105], i,cont=0, min;
	
	scanf("%d", &casos);
	
	while(casos--){
		cumple = true;
		num_caso++;
		scanf("%d", &necesita);
		
		fill(nec, nec+100,  0);
		fill(color, color+100, 0);
		
		for	(i=0; i<necesita; i++)
			scanf("%d", &nec[i]);
				
		sort(nec, nec+i);

		scanf("%d", &num_colores);
		
		for(i=0; i<num_colores; i++)
			scanf("%d", &color[i]);
		
		sort(color, color+i);
		
		num_colores--, necesita--;
		
		for(i=necesita; i>=0; i--){
			if(nec[i] <= color[num_colores]){
				num_colores--;
			}
			else{
				cumple = false;
				break;
			}
		}
			
		printf("Case #%d: ", num_caso);
				
		(cumple == true) ? printf("yes\n") : printf("no\n");	
	}
	
	return 0; 
}
