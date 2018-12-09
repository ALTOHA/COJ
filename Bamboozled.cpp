#include <bits/stdc++.h>

using namespace std;

bool bsearch(int arr[], int target, int tam){
	int left = 0, right, mid;
	
	right = tam-1;
	
	while(left < right){
		mid = (left+right)/2;
		
		if(arr[mid] < target)
			left = mid+1;
		else
			right = mid;
		
	}
	return (arr[left] == target);
}

int main(){
	map <int, int> valores;
	map<int, int> :: iterator it;
	int num_valores, arr[1005], i;
	
	scanf("%d", &num_valores);
	
	for(i=0; i<num_valores; i++)
		scanf("%d", &arr[i]);
	
	
	for(i=0; i<num_valores; i++){
		if(bsearch(arr, arr[i], num_valores) == true)
			valores[arr[i]];			
		
	}
	
	printf("%d\n", valores.size());
	
	for(it = valores.begin(); it!= valores.end(); it++)
		printf("%d\n", it->first);
	
	return 0;
}
