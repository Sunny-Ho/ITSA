#include <stdio.h>
#include <stdlib.h>

int main(){
	int in,tmp = 0,max = 0;
	while(scanf("%d",&in) == 1){
		tmp = tmp + in;
		if(max < tmp){
			max = tmp;
		}
		if(tmp < 0){
			tmp = 0;
		} 
	}
	printf("%d\n",max);
	return 0;
}