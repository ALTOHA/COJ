#include <bits/stdc++.h>

using namespace std;

int main(){
	int casos, num_javabeans, i, cont = 0;
	
	scanf("%d", &casos);
	
	while(casos--){
		scanf("%d", &num_javabeans);
		
		while(num_javabeans > 0){
			num_javabeans/=2;
			cont++;
		}
		
		printf("%d\n", cont);
		cont = 0;
	}
	
	return 0;
}
