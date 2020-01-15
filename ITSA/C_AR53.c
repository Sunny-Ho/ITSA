//學生成績排序

#include <stdio.h>
#include <stdlib.h>
# define int long long

int main(){
	int cnt,i,j;
	scanf("%ld",&cnt);
	int a[cnt];
	for(i=0 ; i<cnt ; i++)
		scanf("%ld",&a[i]);
	for(i=0 ; i<cnt ; i++){
		for(j=0 ; j<cnt ; j++){
			if(a[j] > a[j+1]){
				int tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}
	for(i=0 ; i<cnt ; i++){
		printf("%ld\n",a[i]);
	}
	return 0;
}