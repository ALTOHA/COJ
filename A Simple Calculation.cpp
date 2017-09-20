#include <cstdio>
#include <cmath>

using namespace std;

int main(){
	int tamano, cuadrados=0, rectangulos=0, i;
	
	while(scanf("%d", &tamano) != EOF){
		
		for(i=1; i<=tamano; i++){
			cuadrados += pow(i, 2);
			rectangulos += pow(i,3);
					
		}
		
		printf("%d %d\n", cuadrados, rectangulos);
		
		cuadrados = rectangulos = 0;
	}
	
	return 0;
}
