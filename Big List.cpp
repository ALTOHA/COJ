#include <bits/stdc++.h>

using namespace std;

int main(){
	map<string, int> mate;
	map<string, int> :: iterator it;
	
	int preguntas, respuestas, res_correcta, res_axe, comp=0;
	char op[50], op2[50];
	
	scanf("%d %d", &preguntas, &respuestas);
	
	while(preguntas--){
		scanf("%s %d", op, &res_correcta);
		
		mate[op] = res_correcta;
	}
	
	while(respuestas--){
		scanf("%s", op2);
		
		for(it = mate.begin() ; it!=mate.end(); it++){
			if(it->first == op2){
				scanf("%d", &res_axe);
					
					if(it->second == res_axe)
						printf("ok\n"), comp=1;
					else if(it->second != res_axe)
						printf("wrong\n"), comp=1;
			}
			
		}
		if(comp==0)
			printf("not found\n");
		
		comp=0;
	}
	return 0;
}
