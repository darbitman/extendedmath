#include "NFA.h"

NFA::NFA(const char* regExp, unsigned int numChars) {
                                                            
    this->graph = new Digraph(numChars + 1);                // create digraph with numChars + 1 vertices. need extra vertex for "match" state
}