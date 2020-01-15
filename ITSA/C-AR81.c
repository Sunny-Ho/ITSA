//3*3array

#include <stdio.h>
#include <stdlib.h>

int main(){
	int a[9];
	int i,j;
	scanf("%d,%d,%d",&a[0],&a[1],&a[2]);
	scanf("%d,%d,%d",&a[3],&a[4],&a[5]);
	scanf("%d,%d,%d",&a[6],&a[7],&a[8]);
	for(i=0 ; i<9 ; i++){
		for(j=0 ; j<9 ; j++){
			if(a[j] < a[j+1]){
				int tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}
	for(i=0 ; i<9 ; i++) printf("%d\n",a[i]);
	printf("%d\n",a[0]+a[1]+a[2]);
	return 0;
}