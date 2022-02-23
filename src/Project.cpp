#include <iostream>
#include <vector>
#include "graph.h"


int main(int argc, char const *argv[])
{
    const int V = 3;
    Graph<V> myGraph;
    myGraph.addEdge(0, 2, 500);
    myGraph.addEdge(1, 2, 600);
    myGraph.PrintGraph();


    return 0;
};