#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, i, res;
	char carta[10005];
	
	scanf("%d", &casos);
	
	while(casos--){
		res = 0;
		
		scanf("%s", carta);
		
		if(carta[0] == 'a')
			res++;
			
		for(i=0; i<strlen(carta); i++){
			if(carta[i] == 'b' && carta[i+1] == 'a'){
				res+=2;
			}
		}
		
		printf("%d\n", res);
	}
	
	return 0;
}
