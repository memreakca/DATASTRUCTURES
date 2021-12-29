#include <stdio.h>
#include <stdlib.h>

#define Vertex_Number 10

struct vertex {
    int node;
    struct vertex *nextVertex;
};
struct vertex *head[Vertex_Number];

int indegree(int a[][Vertex_Number], int v) {
    int i, degree = 0;
    for(i = 0; i < Vertex_Number; i++)
        degree += a[i][v]; 
    return degree; 
}

int outdegree(int a[][Vertex_Number], int v) {
    int i, degree = 0;
    for(i = 0; i < Vertex_Number; i++)
        degree += a[v][i]; 
    return degree;
}

