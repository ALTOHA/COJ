#include <bits/stdc++.h>

using namespace std;

int main(){
	map <int, int> reportes;
	map <int, int> ::iterator it;
	int casos, anio, report;
	
	scanf("%d", &casos);
	
	while(casos--){
		scanf("%d %d", &anio, &report);
		
		reportes[anio]+=report;
	}
	
	for(it = reportes.begin(); it!= reportes.end(); it++)
		printf("%d %d\n", it->first, it->second);
	
	return 0;
}
