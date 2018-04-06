#include "DirectedDFS.h"
#include "Digraph.h"

DirectedDFS::DirectedDFS(Digraph* G, unsigned int src) {
    marked = new bool[G->V()];
    dfs(G, src);
}
