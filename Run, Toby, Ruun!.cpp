#include <bits/stdc++.h>

using namespace std;

int arr[1000005];

int main(){
	int flores, color[100005], casos, num_flores, max, cont, i, pos;
	
	scanf("%d", &casos);
	
	while(casos--){
		
		fill(arr, arr+1000005, 0), cont = 1;
		max = INT_MIN, flores = pos = 0;
		
		scanf("%d", &num_flores);
		
		for(i = 0; i<num_flores; i++)
			scanf("%d", &color[i]);
		
		for(i=0; i<num_flores; i++){
			if(arr[color[i]] != cont)
				flores++;
				
			else{
				if(flores > max)
					max = flores;
					
				flores = 1;
				cont++;
				pos++;
				i = pos-1;
			}
			arr[color[i]] = cont;
			
		}
		if(flores > max)
			max = flores;
		
		printf("%d\n", max);
	}
	return 0;
}
