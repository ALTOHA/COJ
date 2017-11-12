#include <bits/stdc++.h>

using namespace std;

int main(){
	int camas, i, cont=0, arr[30], ascii, cont2=0;
	char personas[1000];

	while(scanf("%d", &camas) && camas != 0){
		scanf("%s", personas);
		
		fill(arr, arr+30, 0);
		
		for(i=0; i<strlen(personas); i++){
				
				ascii = personas[i]-65;
				
				if(arr[ascii] > 0)
					arr[ascii] = 0, cont--;					
				
				else {
					cont++, arr[ascii]++;
					
					if(cont > camas)
						cont2++;				
				}
			}
		(cont2 != 0) ? printf("%d customer(s) walked away.\n", cont2) : printf("All customers tanned successfully.\n");
		cont = cont2 = 0;
	}
	return 0;
}
