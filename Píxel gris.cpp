#include <bits/stdc++.h>

using namespace std;

int main(){
	int red, green, blue;
	
	scanf("%d %d %d", &red, &blue, &green);
	
	((red+blue+green) % 3 >= 2) ? printf("%d\n", (red+blue+green)/3 + 1) : printf("%d\n", (red+blue+green)/3);
	
	
	return 0;
}
