//Implementation of Breadth First Search using Adjacency Matrix

#include<stdio.h>

int n,i,j,visited[10], queue[10], front = -1, rear = -1;
int adj[10][10];


void bfs(int v) {
    for(i=1; i<=n; i++) {
        if (adj[v][i] && !visited[i]) {// Check if there is an edge between current and next vertex and if the next vertex is not visited
            queue[++rear] = i;//Enqueue the next vertex
        }
        if(front <= rear) { // If there are vertices in the queue
            visited[queue[front]] = 1; // Mark the front vertex as visited
            bfs(queue[front++]); // Recursively call BFS with the front vertex dequeued
        }
    }
}


int main() {
    int v;

    printf("Enter the number of vertices: ");
    scanf("%d",&n);

    for(i=0; i<=n; i++) {
        visited[i] = 0;
        queue[i] = 0;
    }

    printf("Enter graph in matrix form: \n");
    for(i=1; i<=n; i++) {
        for(j=1; j<=n; j++) {
            scanf("%d",&adj[i][j]);
        }
    }

    printf("Enter the starting vertex: ");
    scanf("%d",&v);

    bfs(v);

    printf("The nodes which are reachable are: \n");

    for(i=1; i<=n; i++) {
        if (visited[i]) {
            printf("%d\t",i); //print the reachable nodes
        }
        else {
            printf("BFS is not possible. Not all nodes are reachable");
        }
    }
    return 0;
}