#include <bits/stdc++.h>

using namespace std;

// Function to perform Dijkstra's algorithm
vector<int> dijkstra(vector<vector<pair<int, int>>>& graph, int start) {
    int V = graph.size();
    vector<int> dist(V, numeric_limits<int>::max()); // Initialize distances to infinity
    dist[start] = 0; // Distance from start node to itself is 0

    // Priority queue to store vertices based on their distance from the start vertex
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, start}); // Push the start vertex with distance 0

    while (!pq.empty()) {
        int u = pq.top().second; // Extract the vertex with minimum distance
        pq.pop();

        // Update distance value and add neighboring vertices to the priority queue
        for (auto& neighbor : graph[u]) {
            int v = neighbor.first;
            int weight = neighbor.second;
            if (dist[v] > dist[u] + weight) {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }
    return dist;
}

int main() {
    int V = 6; // Number of vertices
    vector<vector<pair<int, int>>> graph(V); // Adjacency list representation

    // Example graph edges and weights
    graph[0].push_back({1, 5});
    graph[0].push_back({2, 1});
    graph[1].push_back({3, 3});
    graph[1].push_back({4, 8});
    graph[2].push_back({1, 2});
    graph[2].push_back({4, 1});
    graph[3].push_back({5, 2});
    graph[4].push_back({5, 6});

    int start = 0; // Starting vertex for Dijkstra's algorithm

    // Perform Dijkstra's algorithm
    vector<int> distances = dijkstra(graph, start);

    // Output the shortest distances from the start vertex to all other vertices
    cout << "Shortest distances from vertex " << start << " to all other vertices:" << endl;
    for (int i = 0; i < V; ++i) {
        cout << "Vertex " << i << ": " << distances[i] << endl;
    }

    return 0;
}