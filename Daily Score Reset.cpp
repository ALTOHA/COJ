#include <bits/stdc++.h>

using namespace std;

int main(){
	int score, diferencia = 0;
	
	scanf("%d", &score);
	
	if(score >= 3000){
		diferencia = abs(3000 - score), score = 3000;
		
		(diferencia % 2 != 0) ? diferencia = (diferencia / 2) + 1 : diferencia /= 2;
		
	}
	
	printf("%d\n", score + diferencia);
	
	return 0;
}
