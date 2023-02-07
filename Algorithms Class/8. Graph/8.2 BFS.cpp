#include <bits/stdc++.h>
 
using namespace std;

int graph[5][5];

void add_undirected_edge(int source_vertex, int target_vertex) {
    graph[source_vertex][target_vertex] = 1;
    graph[target_vertex][source_vertex] = 1;
}

void bfs(int start) {
    bool visited[5] = {};
    queue<int> order;
    order.push(start);

    while(!order.empty()) {
        int current_vertex = order.front();
        order.pop();
        if(!visited[current_vertex]) {
            visited[current_vertex] = true;
            for(int i = 1; i <= 5; i++) {
                if(graph[current_vertex][i] && !visited[i]) {
                    order.push(i);
                }
            }
        }
    }
}

int main() {
    add_undirected_edge(0, 1);
    add_undirected_edge(0, 4);
    add_undirected_edge(1, 4);
    add_undirected_edge(1, 3);
    add_undirected_edge(1, 2);
    add_undirected_edge(4, 3);
    add_undirected_edge(3, 2);

    bfs(0);
    
    return 0;
}