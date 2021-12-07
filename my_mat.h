#ifndef _MY_MAT_H_
    #define _MY_MAT_H_
    const int n;
    // insert values to a matrix from the user
    void insertValues(int[n][n]);

    // get two nodes to check if there is a path between them
    int hasPath(int[n][n], int, int);

    // get two nodes to return the shortest path between them
    int shortestPath(int[n][n], int, int);
    #endif
