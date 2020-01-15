#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int i,cnt=0;
	char line[10000],tmp[10000];
	memset(line,'\0',strlen(line));
	memset(tmp,'\0',strlen(tmp));
	while(fgets(line,10000,stdin) != NULL){
		cnt = 0;
		if(line[strlen(line) -1] == '\n') line[strlen(line) -1] = '\0';
		for(i=0 ; i<strlen(line) ; i++){
			tmp[cnt] = line[strlen(line)-i-1];
			cnt++;
		}
		if(strcmp(line,tmp) ==0 ) printf("yes\n");
		else printf("no\n");
		memset(line,'\0',strlen(line));
		memset(tmp,'\0',strlen(tmp));
	}
	return 0;
}