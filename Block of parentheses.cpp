#include <bits/stdc++.h>

using namespace std;

int main(){
	char parentesis[100005], par = '0', resul;
	int i, cont = 0, max = 0; 
	for(i=0; i<=100005; i++){
		scanf("%c", &parentesis[i]);
		
		if(parentesis[i] == '\n')
			break;
			
		if(parentesis[i] == '(' && (par == '(' || par == '0')){
			par = '(';
			cont++;
			if(cont > max){
				max = cont;
				resul = '(';
			}
		}
		
		if(parentesis[i] == ')' && (par == ')' || par == '0')){
			par = ')';
			cont++;
			
			if(cont > max){
				max = cont;
				resul = ')';
			}
		}
		
		if(parentesis[i] == ')' && par == '('){
			cont = 1;
			par = ')';
		}
		
		if(parentesis[i] == '(' && par == ')'){
			cont = 1;
			par = '(';
		}
			
	}
	printf("%d %c\n", max, resul);
	
	return 0;
} 
