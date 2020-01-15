// Jolly
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int n;
    int jolly[3500];
    bool jollyp = 1;

    while(scanf("%d",&n) != EOF){
        bool jump[3500] = {0};
        jollyp = 1;
        for( int i = 0 ; i < n ; i++ ){
            scanf( "%d", &jolly[i] );
        }

        for( int i = 1 ; i < n ; i++ ){
			//界在1~n 中間沒空(jump)
            if((abs(jolly[i] - jolly[i-1]) >= n )|| (abs(jolly[i] - jolly[i-1]) <= 0 )|| (jump[abs(jolly[i] - jolly[i-1])] )){
                jollyp = 0;
                break;
            }
            jump[abs(jolly[i] - jolly[i-1])] = 1;
        }

        if(jollyp){
            printf( "Jolly\n" );
        }
        else{
            printf( "Not jolly\n" );
        }
    }
    return 0;
}
