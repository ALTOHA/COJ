#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

int main(){
char jei[500], joy[500];
int a, b, c, i, j, q, l, u;
do{
    l=a=u=0;
   scanf ("%d", &a);
   if (a!=0){
   scanf ("%s", jei);
   b=strlen(jei);
   u=b/a;
   for (i=0; i<=b; i++){
       
   if ((i+1)%u==0){
                   for (j=i; j>=(i+1)-u; j--){
                   joy[l]=jei[j];
                   l++;
                   }
                   }
   }
   for (q=0; q<b; q++){
   printf ("%c", joy[q]);
   }
   printf ("\n");
   }
   }while (a!=0);


return 0;
}

