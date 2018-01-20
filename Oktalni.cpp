#include <bits/stdc++.h>

using namespace std;

int main(){
	char binario[105], bin[105];
	int i,l, res[50], max = 0;
	bool num = false;
	
	scanf("%s", binario);
	
	if(strlen(binario) % 3 != 0){
		
		if((strlen(binario)+1) % 3 == 0){
			
			bin[0] = '0', l = 1;
			
			for(i=0; i<strlen(binario); i++){
				bin[l] = binario[i];
				l++;
			}
		}
		
		else{
			
			bin[0] = '0', bin[1] = '0';
			l = 2;
			
			for(i=0; i<strlen(binario); i++){
				bin[l] = binario[i];
				l++;
			}			
		}
		
		for(i=0; i<l; i++)
			binario[i] = bin[i];
			
		
	}
	l = 0;
	for(i=0; i<strlen(binario); i+=3){
		
		if(binario[i] == '1'){
			
			if(binario[i+1] == '1'){
				
				if(binario[i+2] == '1')
					res[l] = 7;
				
				else if(binario[i+2] == '0')
					res[l] = 6;
			}
			else{	
				if(binario[i+2] == '1')
					res[l] = 5;
				
				else if(binario[i+2] == '0')
					res[l] = 4;			
			}
			
		}
		else{
			if(binario[i+1] == '1'){
				
				if(binario[i+2] == '1')
					res[l] = 3;
				
				else if(binario[i+2] == '0')
					res[l] = 2;
			}
			
			else{	
				if(binario[i+2] == '1')
					res[l] = 1;
				
				else if(binario[i+2] == '0')
					res[l] = 0;				
			}			
			
		}
		
		if(max < res[l])
			max = res[l];
			
			
		l++;
	}

	for(i=0; i<strlen(binario)/3; i++){
		
		if(res[i] > 0)
			printf("%d", res[i]), num = true;
			
		else if(res[i] == 0 && num == true)
			printf("%d", res[i]);
		
		else if(max == 0){
			printf("0");
			break;
		}
		
			
	}
	printf("\n");
	
	return 0;
}
