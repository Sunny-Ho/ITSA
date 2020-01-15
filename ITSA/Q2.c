//英里轉公里
#include <stdio.h>
#include <stdlib.h>

int main(){
	int num = 0;
	double tmp = 0.0;
	while(scanf("%d",&num) != EOF){
		tmp = num *1.6;
		printf("%.1f\n",tmp);
		tmp = 0.0;
	}
	return 0;
}