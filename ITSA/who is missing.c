#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Max 800000

int main(){
	int len,i,tmp,cnt=0;
	char line[Max] = {'\0'};
	int num[Max] = {0},ans[Max]= {0};
	char ptr;
	scanf("%d",&len);
	fgets(line,Max,stdin);
	ptr = strtok(line," ");
	while(ptr != NULL){
		tmp = atoi(ptr);
		num[tmp] = 1;
		ptr = strtok(NULL," ");
	}
	for(i=1 ,cnt = 0 ; i<=len ; i++){
		if(num[i] == 0){
			ans[cnt] = i;
			cnt++;
		}
	}
	for(i=0 ; i<cnt ; i++){
		if(i==cnt-1){
			printf("%d\n",ans[i]);
			break;
		}
		printf("%d ",ans[i]);
	}
	for(i=0 ; i<Max ; i++){
		ans[i] = 0;
		num[i] = 0;
	}
	return 0;
}