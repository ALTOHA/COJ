#include <bits/stdc++.h>

using namespace std;

int main(){
	int num_aulas, max=INT_MIN, reconocimientos, arr[105], i, j, rec;
	
	scanf("%d %d", &num_aulas, &reconocimientos);
	
	for(i=0; i<num_aulas; i++)
		scanf("%d", &arr[i]);
			
	for(i=0; i<num_aulas; i++){
		rec = arr[i];
		for(j=i+1; j<num_aulas; j++){
			if(rec + arr[j] <= reconocimientos)
				rec+=arr[j];
			else
				j = num_aulas;
		}
		
		if(rec > max)
			max = rec;
	}
	
	printf("%d\n", max);
	
	return 0;
}
