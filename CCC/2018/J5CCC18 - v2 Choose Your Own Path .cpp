#include <bits/stdc++.h>
 
using namespace std;

const int PAGES = 10001;
int num_pages[PAGES] = {};
bool visited[PAGES] = {};
vector<int> graph[PAGES];

void add_directed_edge(int source_vertex, int target_vertex) {
    graph[source_vertex].push_back(target_vertex);
}

void bfs() {
    queue<int> order;
    order.push(1);
    num_pages[1] = 1;
    visited[1] = true;

    while(!order.empty()) {
        int current_vertex = order.front();
        order.pop();

        if(!visited[current_vertex]) {
            visited[current_vertex] = true;

            for(int i = 1; i <= graph[current_vertex].size(); i++) {
                order.push(graph[current_vertex][i]);
                num_pages[i] = num_pages[current_vertex] + 1;
            }
        }
    }
}

int main() {
    vector<int> end_pages;
    int num_choices, choice, pages;
    cin >> pages;
    end_pages.push_back(1);
        
    for(int i = 1; i <= pages; i++) {
        cin >> num_choices;

        if(num_choices == 0) 
            end_pages.push_back(i);

        for(int j = 0; j < num_choices; j++) {
            cin >> choice;
            add_directed_edge(i, choice);
        }
    }

    bfs();

    char reachable = 'Y';
    for(int i = 1; i <= pages; i++) {
        if(!visited[i])
        reachable = 'N';
        break;
    }

    // if(reach == pages)
    //     reachable = 'N';

    int minimum = pages;
    for(int i = 1; i < end_pages.size(); i++) {
        if(num_pages[end_pages[i]] < minimum)
            minimum = num_pages[end_pages[i]];
    }
        
    cout << reachable << endl;
    cout << minimum << endl;

    return 0;
}