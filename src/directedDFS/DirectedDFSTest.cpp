#include "DirectedDFS.h"
#include <iostream>


int main() {
    Digraph g(10);
    g.addEdge(0, 1);
    g.addEdge(0, 5);
    g.addEdge(7, 9);
    DirectedDFS dfs(&g, 0);
    return 0;
}