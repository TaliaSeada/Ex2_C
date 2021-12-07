#include <stdio.h>
#include <math.h>
#include "my_mat.h"

#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))
#define n 10

// insert values to a matrix from the user
    void insertValues(int[n][n] mat){

    }

    // get two nodes to check if there is a path between them
    int hasPath(int[n][n] mat, int i, int j){
        if(mat[i][j] == 0){
            return 0;
        }
        return 1;
    }

    // get two nodes to return the shortest path between them
    int shortestPath(int[n][n] mat, int i, int j){
        if(mat[i][j] == 0){
            return -1;
        }
        return mat[i][j];
    }