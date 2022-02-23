#include "graph.h"

template <int ARRAY_LEN>

void Graph<ARRAY_LEN>::addEdge(int u, int v, int wt) {
    graph[u].push_back(std::make_pair(v, wt));
    graph[v].push_back(std::make_pair(u, wt));
};

template <int ARRAY_LEN>

void Graph<ARRAY_LEN>::PrintGraph() const {
    int v;
    int w;
    for (int u = 0; u < V; u++)  {
        std::cout << "Node " << u << " makes an edge with \n";
        for (auto it = graph[u].begin(); it!=graph[u].end(); it++)
        {
            v = it->first;
            w = it->second;
            std::cout << "\tNode " << v << " with edge distance: "
                << w << "m\n";
        }
        std::cout << "\n";
    }
}