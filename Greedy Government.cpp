#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, N, M, medio1, medio2;
	
	scanf("%d", &casos);
	
	while(casos--){
		scanf("%d %d", &N, &M);
		
		if(N == 0 || M == 0)
			printf("0\n");
		
		else{
			
			(N % 2 == 1) ? medio1 = N/2+1 : medio1 = N/2;
			
			(M % 2 == 1) ? medio2 = M/2+1 : medio2 = M/2;
			
			printf("%d\n", N-medio1 + M - medio2 + 1);
		}
	}
	
	return 0;
}
