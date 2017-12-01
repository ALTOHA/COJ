#include <bits/stdc++.h>

using namespace std;

int main(){
	int num, mul, arr;
	map <int, int> multiplos;
	map <int, int> :: iterator it;
	
	scanf("%d %d", &num, &mul);
	
	multiplos.clear();
	
	for(int i = 0; i<mul; i++){
		scanf("%d", &arr);
		
		for(int j = arr; j<= num; j+=arr){
			multiplos[j] = 1;
		}
	}
	
	cout<<multiplos.size();
	
	return 0;
}
