#include <bits/stdc++.h>

using namespace std;

int main(){
	int num_casas, tareas, casa, res = 0, cas= 1;
	
	scanf("%d %d", &num_casas, &tareas);
	
	while(tareas--){
		scanf("%d", &casa);
		
		if(casa > cas)
			res += casa - cas;
		
		else if(cas != casa)
			res += (casa+num_casas - cas);
		
		cas = casa;

	}
	printf("%d\n", res);
	return 0;
}
