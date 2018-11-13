#include <cstdio>

int main(){
	long long int pos1, pos2, pos3, pos4, menor[8] = {6,4,6,2,4,8,3,2}, mayor[8] = {6,1,2,2,4,8,3,2};
	
	scanf("%lld %lld %lld %lld", &pos1, &pos2, &pos3, &pos4);
	
	if(pos1 >= 7){
		printf("%lld", mayor[pos1%8]);
	}
	else
		printf("%lld", menor[pos1%8]);
		
	if(pos2 >= 7){
		printf("%lld", mayor[pos2%8]);
	}
	else
		printf("%lld", menor[pos2%8]);
		
	if(pos3 >= 7){
		printf("%lld", mayor[pos3%8]);
	}
	else
		printf("%lld", menor[pos3%8]);
		
	if(pos4 >= 7){
		printf("%lld", mayor[pos4%8]);
	}
	else
		printf("%lld\n", menor[pos4%8]);						
	
	return 0;
}
