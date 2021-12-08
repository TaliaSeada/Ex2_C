#include <stdio.h>
#include <math.h>
#include "my_mat.h"

#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))
#define n 10

// insert values to a matrix from the user
    void insertValues(int mat[n][n]){
        int t;
        int temp[n][n];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                scanf("%d", t);
                mat[i][j] = t;
                temp[i][j] = t;

            }
        }

        for(int k = 0; k < n; k++){
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    if(i==j){
                        mat[i][j]=0;
                    }
                    else if(temp[i][j] != 0 && temp[i][k] != 0 && temp[k][j] != 0){
                        mat[i][j] = MIN(temp[i][j], temp[i][k] + temp[k][j]);
                    }
                    else if(temp[i][j] != 0 && (temp[i][k] == 0 || temp[k][j] == 0)){
                        mat[i][j] = temp[i][j];
                    }
                    else if(temp[i][j] == 0 && temp[i][k] != 0 && temp[k][j] != 0){
                        mat[i][j] = temp[i][k] + temp[k][j];
                    }
                    else{
                        mat[i][j] = 0;
                    }
                }
            }
        }

        for(int i=0;i<n;i++){
            for (int j = 0; j < n; j++){
                temp[i][j]=mat[i][j];
            }
        }
        return 0;
    }

    // get two nodes to check if there is a path between them
    int hasPath(int mat[n][n], int i, int j){
        if(mat[i][j] == 0){
            return 0;
        }
        return 1;
    }

    // get two nodes to return the shortest path between them
    int shortestPath(int mat[n][n], int i, int j){
        if(mat[i][j] == 0){
            return -1;
        }
        return mat[i][j];
    }