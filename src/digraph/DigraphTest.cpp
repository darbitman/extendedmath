#include "Digraph.h"


int main() {
    Digraph* g = new Digraph(10);
    g->addEdge(0, 7);
    g->addEdge(0, 9);
    g->addEdge(0, 2);
    delete g;
    return 0;
}