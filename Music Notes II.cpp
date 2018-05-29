#include <bits/stdc++.h>

using namespace std;

int main(){
	map <long long int, long long int> notas;
	map <long long int, long long int> :: iterator it;
	
	long long int num_notas, num_querry, querry ,tiempo = 0, cont = 1, duracion, arr[50005], i = 0, temp;
	
	scanf("%lld %lld", &num_notas, &num_querry);
	
	while(num_notas--){
		scanf("%lld", &duracion);
		tiempo += duracion;
		notas[tiempo] = cont;
		arr[cont-1] = tiempo;
		cont++;
	}
	
	while(num_querry--){
		scanf("%lld", &querry);
		
		for(i=0; i<cont; i++){
			if(arr[i] > querry){
				temp = arr[i];
				break;
			}
				
		}
		
		printf("%lld\n", notas.at(temp));
	}
	
	return 0;
}
