#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j;
    int row, column;
    int student, boy = 0, girl = 0;
    while(scanf("%d%d", &row, &column) != EOF){
        for(i = 0; i < row; i++){
            for(j = 0; j < column; j++){
                scanf("%d", &student);

                if(student == 0){
                    girl++;
                }
                else if(student == 1){
                    boy++;
                }
            }
            getchar();
        }

        if(girl > boy){
            printf("0\n");
        }
        else if(boy > girl){
            printf("1\n");
        }
        else if(boy == girl){
            printf("2\n");
        }
    }

    return 0;
}
