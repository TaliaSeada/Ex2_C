#include <stdio.h>
#include <math.h>
#include "my_mat.h"

#define n 10

int main(){
    int mat[n][n];
    char action = 0;
    
    while(action != 'D'){
        scanf("%c", action);
        if(action == 'A'){
            insertValues(mat);
        }
        
        else if(action == 'B'){
            int i, j;
            scanf("%d%d", i,j);
            int ans = hasPath(mat, &i, &j);
            if(ans == 1){
                printf("True\n");
            }
            else{
                printf("False\n");
            }
        }

        else if(action == 'C'){
            int i, j;
            scanf("%d%d", i,j);
            int ans = shortestPath(mat, &i, &j);
            printf("%d\n", ans);
        }
    }
    return 0;
}