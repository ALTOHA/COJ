#include <bits/stdc++.h>

using namespace std;

int main(){
    int casos, R, C;
    
    scanf("%d",&casos);
    
    while(casos--){
        
        scanf("%d %d",&R, &C);
        
        (((R + C) % 2) == 0) ? printf("Second\n") : printf("First\n");
    }
    return 0;
}
