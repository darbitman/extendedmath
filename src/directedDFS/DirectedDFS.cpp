#include "DirectedDFS.h"


DirectedDFS::DirectedDFS(Digraph* g, unsigned int src) {
    marked = new bool[g->V()];
    dfs(g, src);
}


DirectedDFS::~DirectedDFS() {}

void DirectedDFS::dfs(Digraph* g, unsigned int v) {
}