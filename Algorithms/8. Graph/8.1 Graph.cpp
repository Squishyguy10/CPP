#include <bits/stdc++.h>
 
using namespace std;

int graph[5][5];

void add_directed_edge(int u, int v) {
    graph[u][v] = 1;
}

void add_undirected_edge(int u, int v) {
    graph[u][v] = 1;
    graph[v][u] = 1;
}

void add_directed_edge_weight(int u, int v, int value) {
    graph[u][v] = value;
}

void add_undirected_edge_weight(int u, int v, int value) {
    graph[u][v] = value;
    graph[v][u] = value;
}

void output_graph() {
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
    
}

int main() {
    // add_directed_edge(0, 1);
    // add_directed_edge(0, 3);
    // add_directed_edge(1, 2);
    // add_directed_edge(1, 4);
    // add_directed_edge(3, 4);
    // add_directed_edge(4, 2);

    // add_undirected_edge(0, 1);
    // add_undirected_edge(0, 3);
    // add_undirected_edge(1, 2);
    // add_undirected_edge(1, 4);
    // add_undirected_edge(3, 4);
    // add_undirected_edge(4, 2);

    add_undirected_edge(0, 1);
    add_undirected_edge(0, 4);
    add_undirected_edge(1, 4);
    add_undirected_edge(1, 3);
    add_undirected_edge(1, 2);
    add_undirected_edge(4, 3);
    add_undirected_edge(3, 2);
    
    // add_directed_edge_weight(0, 1, 1);
    // add_directed_edge_weight(0, 3, 2);
    // add_directed_edge_weight(1, 2, 3);
    // add_directed_edge_weight(1, 4, 4);
    // add_directed_edge_weight(3, 4, 5);
    // add_directed_edge_weight(4, 2, 6);

    // add_undirected_edge_weight(0, 1, 1);
    // add_undirected_edge_weight(0, 3, 2);
    // add_undirected_edge_weight(1, 2, 3);
    // add_undirected_edge_weight(1, 4, 4);
    // add_undirected_edge_weight(3, 4, 5);
    // add_undirected_edge_weight(4, 2, 6);

    output_graph();

    return 0;
}