#include <bits/stdc++.h>

using namespace std;

int main(){
	int num_mosquitos, x, y, maximox = INT_MIN, minimox = INT_MAX, maximoy = INT_MIN, minimoy = INT_MAX;
	
	scanf("%d", &num_mosquitos);
	
	while(num_mosquitos--){
		scanf("%d %d", &y, &x);
		
		if(maximox < x)
			maximox = x;
		if(minimox > x)
			minimox = x;
			
		if(maximoy < y)
			maximoy = y;
		if(minimoy > y)
			minimoy = y;		
	}
	
	maximox-=minimox;
	maximoy-=minimoy;
	
	(maximox > maximoy) ? printf("%d\n", maximox*maximox) : printf("%d\n", maximoy*maximoy);
	
	return 0;
}
