#include <bits/stdc++.h>
 
using namespace std;

const int VERTEX_NUM = 5;
vector<int> adjacency[VERTEX_NUM];
bool directed_graph;

void add_directed_edge(int source_vertex, int target_vertex) {
    adjacency[source_vertex].push_back(target_vertex);
}

void add_undirected_edge(int source_vertex, int target_vertex) {
    adjacency[source_vertex].push_back(target_vertex);
    adjacency[target_vertex].push_back(source_vertex);
}

void add_directed_edge_weight(int source_vertex, int target_vertex, int weight) {
    adjacency[source_vertex].push_back(target_vertex);
}

void add_undirected_edge_weight(int source_vertex, int target_vertex, int weight) {
    adjacency[source_vertex].push_back(target_vertex);
    adjacency[target_vertex].push_back(source_vertex);
}

void bfs(int start) {
    bool visited[VERTEX_NUM] = {};
    queue<int> order;
    order.push(start);

    while(!order.empty()) {
        int current_vertex = order.front();
        order.pop();

        if(!visited[current_vertex]) {
            visited[current_vertex] = true;
            cout << current_vertex << endl;

            for(int i = 0; i < adjacency[current_vertex].size(); i++)
                order.push(adjacency[current_vertex][i]);
        }
    }
}

int main() {
    // add_directed_edge(0, 1);
    // add_directed_edge(0, 4);
    // add_directed_edge(1, 4);
    // add_directed_edge(1, 3);
    // add_directed_edge(1, 2);
    // add_directed_edge(4, 3);
    // add_directed_edge(3, 2);

    add_undirected_edge(0, 1);
    add_undirected_edge(0, 4);
    add_undirected_edge(1, 4);
    add_undirected_edge(1, 3);
    add_undirected_edge(1, 2);
    add_undirected_edge(4, 3);
    add_undirected_edge(3, 2);

    // add_directed_edge_weight(0, 1, 1);
    // add_directed_edge_weight(0, 4, 2);
    // add_directed_edge_weight(1, 4, 3);
    // add_directed_edge_weight(1, 3, 4);
    // add_directed_edge_weight(1, 2, 5);
    // add_directed_edge_weight(4, 3, 6);
    // add_directed_edge_weight(3, 2, 7);

    // add_undirected_edge_weight(0, 1, 1);
    // add_undirected_edge_weight(0, 4, 2);
    // add_undirected_edge_weight(1, 4, 3);
    // add_undirected_edge_weight(1, 3, 4);
    // add_undirected_edge_weight(1, 2, 5);
    // add_undirected_edge_weight(4, 3, 6);
    // add_undirected_edge_weight(3, 2, 7);

    bfs(2);

    return 0;
}