//Implementation of Bellman-Ford Algorithm using Adjacency matrix

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX_VERTICES 100

int graph[MAX_VERTICES][MAX_VERTICES];

void BellmanFord(int vertices, int source) {
    int distance[MAX_VERTICES];

    // Step 1: Initialize distances from source to all other vertices as INFINITY
    for (int i = 0; i < vertices; i++)
        distance[i] = INT_MAX;
    distance[source] = 0;

    // Step 2: Relax all edges |V| - 1 times
    for (int i = 1; i <= vertices - 1; i++) {
        for (int u = 0; u < vertices; u++) {
            for (int v = 0; v < vertices; v++) {
                int weight = graph[u][v];
                if (distance[u] != INT_MAX && distance[u] + weight < distance[v])
                    distance[v] = distance[u] + weight;
            }
        }
    }

    // Step 3: Check for negative-weight cycles
    for (int u = 0; u < vertices; u++) {
        for (int v = 0; v < vertices; v++) {
            int weight = graph[u][v];
            if (distance[u] != INT_MAX && distance[u] + weight < distance[v]) {
                printf("Graph contains negative-weight cycle\n");
                return;
            }
        }
    }

    // Step 4: Print the distances
    printf("Vertex\tDistance from Source\n");
    for (int i = 0; i < vertices; i++)
        printf("%d\t%d\n", i, distance[i]);
}

int main() {
    int vertices, source;

    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);

    printf("Enter the adjacency matrix:\n");
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    printf("Enter the source vertex: ");
    scanf("%d", &source);

    BellmanFord(vertices, source);

    return 0;
}
