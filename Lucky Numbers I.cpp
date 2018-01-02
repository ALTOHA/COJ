#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, i, valor, arr[10000], cont = 0, pos = 0 , pos2 = 0;
	arr[0] = 5;
	
	for(i=1; i<=8000; i++){
		if(pos2 != 0){
			arr[i] = arr[pos] + arr[cont];		
			cont++;
		}
		else{
			arr[i] = arr[pos]*5;
			pos = i;
			cont = 0;
			pos2 = pos+1;
		} 
		pos2--;
	}
	scanf("%d", &casos);
	
	while(casos--){
		scanf("%d", &valor);
		
		printf("%d\n", arr[valor-1]);
	}
	
	return 0;
}
