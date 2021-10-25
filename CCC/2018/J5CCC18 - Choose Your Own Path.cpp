#include <bits/stdc++.h>
 
using namespace std;

const int PAGES = 4;
bool graph[PAGES][PAGES] = {};
int num_pages[PAGES] = {};
bool visited[PAGES] = {};
int reach = 0;

void add_directed_edge(int row, int col) {
    graph[row][col] = true;
}

void bfs(int pages) {
    queue<int> order;
    order.push(1);
    num_pages[1] = 1;

    while(!order.empty()) {
        int current_vertex = order.front();
        order.pop();
        if(!visited[current_vertex]) {

            visited[current_vertex] = true;
            // cout << current_vertex << " -> ";
            for(int i = 1; i <= pages; i++) {

                if(graph[current_vertex][i] && !visited[i]) {
                    order.push(i);
                    num_pages[i] = num_pages[current_vertex] + 1;
                    // reach++;
                }
            }
        }
    }
}

void output_graph(int pages) {
    for(int i = 1; i <= pages; i++) {
        for(int j = 1; j <= pages; j++)
            if(graph[i][j])
                cout << 1 << " ";
            else
                cout << 0 << " ";

        cout << endl;   
    }
}

bool reachable(int pages) {
    for(int i = 1; i < pages; i++) {
        if(!visited[i])
            return false;
    }
    return true;
}

int min_number(int pages) {
    int minimum = pages;
    
    for(int i = 2; i < sizeof(num_pages)/sizeof(num_pages[0]); i++)
        minimum = min(minimum, num_pages[i]);
    
    return minimum;
}

int main() {
    int num_choices;
    int choice;
    int pages;
    cin >> pages;
        
    for(int i = 1; i <= pages; i++) {
        cin >> num_choices;

        for(int j = 0; j < num_choices; j++) {
            cin >> choice;
            add_directed_edge(i, choice);
        }
    }

    bfs(pages);
    // output_graph(pages);

    if(reachable(pages))
        cout << 'Y' << endl;
    else
        cout << 'N' << endl;
    
    cout << min_number(pages) << endl;

    return 0;
}