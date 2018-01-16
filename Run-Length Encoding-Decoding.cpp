#include<bits/stdc++.h>

using namespace std;

int main(){
	int casos, cont =1, num=0, veces, pos, i, j, q;
	char letra[1000], let;
	
	scanf("%d", &casos);
	while(casos--){
		scanf("%s", letra);
		
		printf("Case %d: ", cont);
		cont++;
		
		for(i=0; i<strlen(letra); i++){
		
			if(letra[i]>='A' && letra[i]<='Z'){
				let = letra[i];
				
				for(j = i+1; j<strlen(letra); j++){					
				
					if((letra[j] >= 'A' && letra[j] <= 'Z') || (j == strlen(letra)-1)){
						veces = j-i-1;
						num = 0;
						
						if(j == strlen(letra)-1)
							veces++;
						
						j=strlen(letra);						
						while(veces != 0){
							num += (letra[i+1]-'0')*(pow(10, veces-1));
							veces--;
							i++;
						}
						
						for(q=0; q<num; q++)
							printf("%c", let);					

					}
				}
								
			}
			
		}
		printf("\n");
	}
	return 0;
}
