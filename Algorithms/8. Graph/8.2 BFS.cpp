#include <bits/stdc++.h>
 
using namespace std;

int graph[5][5];

void add_undirected_edge(int u, int v) {
    graph[u][v] = 1;
    graph[v][u] = 1;
}

void bfs(int start) {
    bool visited[5] = {};
    queue<int> q;
    q.push(start);

    while(!q.empty()) {
        if(!visited[q.front()]) {
            for(int i = q.front(); i < 5; i++) {
                if(graph[q.front()][i] == 1 && !visited[i]) {
                    q.push(i);
                }
            }
            visited[q.front()] = true;
            cout << q.front() << endl;
        }
        q.pop();
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