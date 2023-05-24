//Implementation of DFS in C using Adjacency Matrix

#include <stdio.h>

#define MAX_VERTICES 100

int adjMatrix[MAX_VERTICES][MAX_VERTICES];
int visited[MAX_VERTICES];

void dfs(int vertex, int numVertices) {
    int i;
    printf("%d ", vertex);
    visited[vertex] = 1;
  
    for (i = 0; i < numVertices; i++) {
        if (adjMatrix[vertex][i] == 1 && !visited[i]) {
            dfs(i, numVertices);
        }
    }
}

int main() {
    int numVertices, i, j;

    printf("Enter the number of vertices: ");
    scanf("%d", &numVertices);

    printf("Enter the adjacency matrix:\n");
    for (i = 0; i < numVertices; i++) {
        for (j = 0; j < numVertices; j++) {
            scanf("%d", &adjMatrix[i][j]);
        }
    }

    // Initialize visited array
    for (i = 0; i < numVertices; i++) {
        visited[i] = 0;
    }

    printf("DFS traversal: ");
    for (i = 0; i < numVertices; i++) {
        if (!visited[i]) {
            dfs(i, numVertices);
        }
    }

    return 0;
}
