//01010000 00000001 81
#include    <stdio.h>
#include    <stdlib.h>
#include    <string.h>
#include    <math.h>

int main(){
    char line[50] = {'\0'};
	char n;
    int i,ans,runcnt,run=0,bitcnt=0,cnt=0;
    int bit[50][10],op1=0,op2=0,degree;

    scanf("%d\n",&runcnt);
    while(run < runcnt){
        bitcnt=0;cnt=0;
        op1 =0; op2 = 0;
        ans =0 ;
        fgets(line,50,stdin);
        line[strlen(line)-1] = '\0';
        for(i=0;line[i]!='\0';i++){
            n = line[i];
            if(n == ' '){
                bitcnt++;
                cnt = 0;
                continue;
            }
            bit[bitcnt][cnt] = n-'0';
            cnt++;
        }
        for(i=cnt-1;i>=0;i--){
            degree = (cnt-(i+1));
            op1 = op1 + (bit[0][i]*pow(2,degree));
            op2 = op2 + (bit[1][i]*pow(2,degree));
        }
        ans = op1+op2;
        printf("%d\n",ans);
        run++;
    }
    return 0;
}
