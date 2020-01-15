#include <stdio.h>  
#include <string.h>  

char N[1000],M[10000000];  

int main(){  
    long long int len,i,j;  
    while(scanf("%s%s",N,M) != EOF){  
    	len = strlen(M);  
    	int cnt=0;  
    	for(i=0,j=1 ; i<len ; i++,j++){  
        	if(N[0] == M[i] && N[1] == M[j])  
            	cnt++;  
   	 	}  
    	printf("%d\n",cnt);  
    }  
    return 0;  
}  