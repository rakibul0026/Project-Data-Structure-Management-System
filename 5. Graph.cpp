#include <iostream>
#include <list>
using namespace std;

class Graph {
private:
    int V;
    list<int>* adj;

public:
    Graph(int V) {
        this->V = V;
        adj = new list<int>[V];
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void BFS(int start) {
        bool* visited = new bool[V]();
        list<int> queue;
        visited[start] = true;
        queue.push_back(start);

        while (!queue.empty()) {
            start = queue.front();
            cout << start << " ";
            queue.pop_front();

            for (auto adjNode : adj[start]) {
                if (!visited[adjNode]) {
                    visited[adjNode] = true;
                    queue.push_back(adjNode);
                }
            }
        }
        cout << endl;
    }
};

