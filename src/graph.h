#include <vector>
#include <iostream>

template <int ARRAY_LEN>

class Graph {
    public:
        void addEdge(int u, int v, int wt);
        void PrintGraph() const;

    private:
        std::vector<std::pair<int,int>> graph[ARRAY_LEN];
        int V = ARRAY_LEN;
};