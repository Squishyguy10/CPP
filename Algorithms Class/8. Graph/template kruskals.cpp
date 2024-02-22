#include <bits/stdc++.h>
using namespace std;

// Function to find set of an element i
int find(vector<int>& parent, int i) {
    if (parent[i] == -1)
        return i;
    return find(parent, parent[i]);
}

// Function that does union of two sets of x and y
void Union(vector<int>& parent, int x, int y) {
    int xset = find(parent, x);
    int yset = find(parent, y);
    parent[xset] = yset;
}

// Function to run Kruskal's algorithm
void kruskalMST(vector<vector<int>>& graph, int V) {
    vector<int> parent(V, -1); // to store parent array representing the sets

    // Initialize result to store the MST
    vector<vector<int>> result;

    int edgesCount = 0; // Count of edges added in MST

    // Sort all the edges in non-decreasing order of their weight and store them as (weight, src, dest)
    vector<pair<int, pair<int, int>>> edges;
    for (int i = 0; i < V; ++i) {
        for (int j = i + 1; j < V; ++j) {
            if (graph[i][j] != 0) {
                edges.push_back({graph[i][j], {i, j}});
            }
        }
    }

    sort(edges.begin(), edges.end());

    // Loop through all sorted edges
    for (auto edge : edges) {
        int src = edge.second.first;
        int dest = edge.second.second;
        int weight = edge.first;

        int x = find(parent, src);
        int y = find(parent, dest);

        // If including this edge doesn't cause cycle, include it in result
        if (x != y) {
            result.push_back({src, dest, weight});
            Union(parent, x, y);
            edgesCount++;
        }

        // Check if MST is formed
        if (edgesCount == V - 1)
            break;
    }

    // Print the MST
    cout << "Edges in the MST:" << endl;
    for (auto edge : result) {
        cout << edge[0] << " - " << edge[1] << " : " << edge[2] << endl;
    }
}

int main() {
    int V = 4; // Number of vertices in graph
    // Example graph in adjacency matrix form
    vector<vector<int>> graph = {
        {0, 10, 6, 5},
        {10, 0, 0, 15},
        {6, 0, 0, 4},
        {5, 15, 4, 0}
    };

    // Run Kruskal's algorithm
    kruskalMST(graph, V);

    return 0;
}
