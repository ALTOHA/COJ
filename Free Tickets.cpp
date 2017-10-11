#include <bits/stdc++.h>

using namespace std;

int main(){
	unsigned long long int casos, i, j=0, valor, arr[8000], potencia=3, pos=0;
	
	arr[0]=5;
	arr[1]=25;
	arr[2]=30;
	
	for(i=3; i<=8000; i++){
		if(j == pos){
			arr[i]=pow(arr[0], potencia);
			potencia++;
			j=0;
			pos=i;
		}
		else{
			arr[i] = arr[pos]+arr[j]; 
			j++;
		}
	}
	scanf("%d", &casos);
	
	while(casos--){
		scanf("%d", &valor);
		
		cout<<arr[valor-1]<<"\n";
	}
	return 0;
}
