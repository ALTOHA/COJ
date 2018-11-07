#include <bits/stdc++.h>

using namespace std;

int main(){
	int arr[105], jefazo, num_empleados, i, suma = 0, cont = 0;
	
	scanf("%d %d", &jefazo, &num_empleados);
	
	for(i = 0; i<num_empleados; i++){
		scanf("%d", &arr[i]);
		suma+=arr[i];
	}
	
	sort(arr, arr+num_empleados);
	
	for(i=num_empleados-1; i>= 0; i--){
		if(suma < jefazo){
			printf("%d\n", cont+1);
			break;
		}
		else{
			suma-=arr[i];
			jefazo+=arr[i];
			cont++;
		}
	}
	
	return 0;
}
