#include <bits/stdc++.h>

using namespace std;

int main(){
	map <int, int> valores;
	map <int, int> :: iterator it;
	int num, i, cont=1, seq = 2, mitad, sup;
	
	for(i=2; i<=2000000000; i+=seq){
		valores[i] = cont;
		seq*=2;
		cont++;
	}
	
	scanf("%d", &num);
	
	for(it = valores.begin(); it != valores.end(); it++){
		
		if(num <= it->first){
			sup = it->first;
			
			while(it->second != 0){
				mitad = (pow(2, it->second)/2);
								
				if(num <= sup-mitad){
					printf("4");
					sup-=mitad;
				}else{
					printf("7");
				}	
				it->second--;		
				
			}
			break;
		}
	}
	printf("\n");
	return 0;
}
