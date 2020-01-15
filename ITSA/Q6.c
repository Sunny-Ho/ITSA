//季節判斷

#include <stdio.h>
#include <string.h>

int main(){
	int num;
	while(scanf("%d",&num) != EOF){
		if(3 <= num && num <= 5) printf("Spring\n");
		else if(6 <= num && num <= 8) printf("Summer\n");
		else if(9 <= num && num <= 11) printf("Autumn\n");
		else printf("Winter\n");
	}
	return 0;
}