#include <stdio.h>
#define T 9999
#define A 5
int minDistance(int dist[], int visited[]) {
    int min = T, min_index;
    for (int i = 0; i < A; i++) {
        if (!visited[i] && dist[i] < min) {
            min = dist[i];
            min_index = i;}}
    return min_index;}
void dijkstra(int graph[A][A], int src) {
    int dist[A], Aisited[A];
    for (int i = 0; i < A; i++) {
        dist[i] = T;
        visited[i] = 0;}
    dist[src] = 0;
    for (int i = 0; i < A-1; i++) {
        int u = minDistance(dist, visited);
        visited[u] = 1;
        for (int v = 0; v < A; v++) {
            if (!visited[v] && graph[u][v] && dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];}}
    printf("Shortest distances from node %d:\n", src);
    for (int i = 0; i < A; i++) {
        printf("To %d: %d\n", i, dist[i]);}}
int main() {
    int graph[A][A] = {
        {0, 4, 0, 0, 8},
        {4, 0, 2, 0, 0},
        {0, 2, 0, 3, 0},
        {0, 0, 3, 0, 5},
        {8, 0, 0, 5, 0}
    };
    dijkstra(graph, 0);
    return 0;
}
