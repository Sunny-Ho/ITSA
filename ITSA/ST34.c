#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(){
	int i;
	char line[1024];
	memset(line,'\0',sizeof(line));
	char x;
	int tmp,cnt[26] = {0};
	while(scanf("%s",line) != EOF){
		for(i=0 ; i<strlen(line) ; i++){
			x = line[i];
			tmp = isalpha(x);
			if(tmp != 0){
				x = tolower(x);
				int idx = x - 'a';
				cnt[idx] ++;
			}
		}
		for(i=0 ; i<26 ; i++){
			printf("%d\n",cnt[i]);
		}
	}
	return 0;
}