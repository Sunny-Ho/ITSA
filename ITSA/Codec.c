#include <stdio.h>
#include <stdio.h>
#include <string.h>

int main(){
	//Each ASCII code is minus 3
	char line[100000],ans[100000];
	int i,cnt;
	memset(line,'\0',strlen(line));
	memset(ans,'\0',strlen(ans));
	while(fgets(line,100000,stdin) != NULL){
		cnt = 0;
		if(line[strlen(line)-1] == '\n') line[strlen(line) -1] = '\0';
		for(i=0 ; i<strlen(line) ; i++){
			switch(line[i]){

				case 'a':
					ans[cnt] = 'x';
					continue;
				case 'b':
					ans[cnt] = 'y';
					continue;
				case 'c':
					ans[cnt] = 'z';
					continue;
			}
			ans[cnt] = line[i] - 3;
			cnt++;
		}
		printf("%s\n",ans);
		memset(ans,'\0',strlen(ans));
	}
	return 0;
}