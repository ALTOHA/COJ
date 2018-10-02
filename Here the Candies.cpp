#include <bits/stdc++.h>

using namespace std;

int main(){
	unsigned long long int casos, num ,num2 ,mod;
	
	cin >> casos >> mod;
	
	while(casos--){
		cin >> num;
		
		num2 = num*num;
		
		cout << num2%mod << "\n";	
	}
		
	return 0;
}
