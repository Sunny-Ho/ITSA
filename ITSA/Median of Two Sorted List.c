#include <stdio.h>
#include <stdlib.h>

int cmp( const void *a, const void *b){
    return (*(int*)b - *(int*)a);
}

int main(){
    int cnt;
    scanf("%d", &cnt);

    while(cnt--){
        int i;
        int num;
        scanf("%d", &num);
        
        int *input;
        input = calloc(num*2, sizeof(int));	//配置num*2 個int 大小的空間

        for(i = 0; i < num*2; i++){
            scanf("%d", &input[i]);
        }

        qsort(input, num*2, sizeof(int), cmp);

        printf("%d\n", input[num]);
        free(input);
    }

    return 0;
}
