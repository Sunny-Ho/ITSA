//立方和

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float a,b,c,d,e,f;
	scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f);
	double ans=0.0;
	ans = ans + pow(a,3);
	ans = ans+ pow(b,3);
	ans = ans+ pow(c,3);
	ans = ans+ pow(d,3);
	ans = ans+ pow(e,3);
	ans = ans+ pow(f,3);
	printf("%.0f\n",ans);
	return 0;
}