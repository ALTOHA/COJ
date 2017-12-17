#include <bits/stdc++.h>

using namespace std;

int main(){
	int lado1, lado2, lado3, arr[10000], max=INT_MIN, i, j, q;
	
	scanf("%d %d %d", &lado1, &lado2, &lado3);
	
	for(i=1; i<=lado1; i++){
		for(j=1; j<=lado2; j++){
			for(q=1; q<=lado3; q++){
				arr[q+i+j] ++;
				
				if(arr[q+i+j] > max)
					max = arr[q+i+j];
			}
		}
	}
	
	for(i=1; i<=lado1+lado2+lado3; i++){
		if(arr[i] == max){
			printf("%d\n", i);
			break;
		}
	}
	return 0;
}
