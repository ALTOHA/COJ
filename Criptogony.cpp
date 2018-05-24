#include <bits/stdc++.h>

using namespace std;

int main(){
	map <int, char> cambio;
	map <int, char> :: iterator it;
	
	int casos, num_letras, tam, i, j, arr[100], ascii, arr2[100];
	char letras[100], mensaje[1000], temp[100];
	
	scanf("%d", &casos);
	
	while(casos--){
		cambio.clear();
		fill(arr, arr+100, 0);
		fill(arr2, arr2+100, 0);
		fill(letras, letras+100, 0);
		fill(temp, temp+100, 0);
		fill(mensaje, mensaje+1000, 0);
		
		j = 0;
		scanf("%d %d", &num_letras, &tam);
		getchar();
		gets(temp);

		for(i=0; i<strlen(temp); i++){
			if(temp[i] >= 'A' && temp[i] <= 'Z')
				letras[j] = temp[i], j++;
		}
		
		j = 0;
		
		for(i=0; i<tam; i++){
			scanf("%c", &mensaje[i]);
			ascii = mensaje[i] - 65;
			
			arr[ascii]++;
			arr2[ascii]++;
		}
		sort(arr2, arr2+26);
		
		for(i=25; i>=0; i--){

			cambio[arr2[i]] = letras[j];
			j++;
		}
		
		for(i=0; i<strlen(mensaje); i++){
			ascii = mensaje[i] - 65;
			printf("%c", cambio.at(arr[ascii]));
		}
		
		printf("\n");
	}
	
	return 0;
}
