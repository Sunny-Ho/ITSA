#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	double hip,height,bai;
	while(scanf("%lf %lf",&hip,&height) == 2){
		bai = hip / pow(height,1.5) -18;
		if(bai > 40) printf("morbidly obese\n");
		else if (bai > 30) printf("obese\n");
		else if(bai > 25) printf("overweight\n");
		else if(bai > 18.5) printf("healthy\n");
		else printf("underweight\n");
	}
	return 0;
}