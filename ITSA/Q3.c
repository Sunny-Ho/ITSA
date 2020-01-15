//判斷是否在園內

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float a,b,tmp = 0.0;
	while(scanf("%f %f",&a,&b) != EOF){
		tmp = pow(a,2);
		//printf("%.1f",tmp);
		tmp = tmp + pow(b,2);
		if(tmp >= 10000) printf("outside\n");
		else printf("inside\n");
		a = 0; b = 0;tmp = 0;
	}
	return 0;
}