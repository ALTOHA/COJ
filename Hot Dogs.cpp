#include <bits/stdc++.h>

using namespace std;

int main(){
	float hotdogs, personas;
	while(scanf("%f %f", &hotdogs, &personas) != EOF){
		
		printf("%.2f\n", (hotdogs*100)/(personas*100));
	}
	return 0;
}
