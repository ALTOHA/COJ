#include <bits/stdc++.h>

using namespace std;

int main(){
    int casos, num_asientos, i, valor[1000], l=0, cont=0;
    
    scanf("%d", &casos);
    for(i = 1; i<=1000; i*=2){
        valor[l] = i;
        l++;
    }
    
    while(casos--){
        scanf("%d", &num_asientos);
        
        for(i=0; i<l; i++){
            if(num_asientos == valor[i])
             cont++;   
        }
        (cont == 1) ? printf("YES\n") : printf("NO\n");
        cont=0;
    }
    
    
return 0;
}