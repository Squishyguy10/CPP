#include <bits/stdc++.h>
 
using namespace std;

const int VERTEX_NUM = 5;
vector<int> adjacency[VERTEX_NUM];
bool directed_graph;

void add_directed_edge(vector<int> adjacency[], int source_vertex, int target_vertex) {
    adjacency[source_vertex].push_back(target_vertex);
}

void add_undirected_edge(vector<int> adjacency[], int source_vertex, int target_vertex) {
    adjacency[source_vertex].push_back(target_vertex);
    adjacency[target_vertex].push_back(source_vertex);
}

void add_directed_edge_weight(vector<int> adjacency[], int source_vertex, int target_vertex, int weight) {
    adjacency[source_vertex].push_back(target_vertex);
}

void add_undirected_edge_weight(vector<int> adjacency[], int source_vertex, int target_vertex, int weight) {
    adjacency[source_vertex].push_back(target_vertex);
    adjacency[target_vertex].push_back(source_vertex);
}

void print_graph() {
    for(int i = 0; i < VERTEX_NUM; i++) {
        cout << "Adjacency list of vertex " << i << " is -> ";

        for(int j = 0; j < adjacency[i].size(); j++) {
            cout << adjacency[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    // add_directed_edge(adjacency, 0, 1);
    // add_directed_edge(adjacency, 0, 4);
    // add_directed_edge(adjacency, 1, 4);
    // add_directed_edge(adjacency, 1, 3);
    // add_directed_edge(adjacency, 1, 2);
    // add_directed_edge(adjacency, 4, 3);
    // add_directed_edge(adjacency, 3, 2);

    // add_undirected_edge(adjacency, 0, 1);
    // add_undirected_edge(adjacency, 0, 4);
    // add_undirected_edge(adjacency, 1, 4);
    // add_undirected_edge(adjacency, 1, 3);
    // add_undirected_edge(adjacency, 1, 2);
    // add_undirected_edge(adjacency, 4, 3);
    // add_undirected_edge(adjacency, 3, 2);

    // add_directed_edge_weight(adjacency, 0, 1, 1);
    // add_directed_edge_weight(adjacency, 0, 4, 2);
    // add_directed_edge_weight(adjacency, 1, 4, 3);
    // add_directed_edge_weight(adjacency, 1, 3, 4);
    // add_directed_edge_weight(adjacency, 1, 2, 5);
    // add_directed_edge_weight(adjacency, 4, 3, 6);
    // add_directed_edge_weight(adjacency, 3, 2, 7);

    // add_undirected_edge_weight(adjacency, 0, 1, 1);
    // add_undirected_edge_weight(adjacency, 0, 4, 2);
    // add_undirected_edge_weight(adjacency, 1, 4, 3);
    // add_undirected_edge_weight(adjacency, 1, 3, 4);
    // add_undirected_edge_weight(adjacency, 1, 2, 5);
    // add_undirected_edge_weight(adjacency, 4, 3, 6);
    // add_undirected_edge_weight(adjacency, 3, 2, 7);

    print_graph();

    return 0;
}