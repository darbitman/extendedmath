#include "Digraph.h"


Digraph::Digraph(unsigned int V) : totalVertices(V) {
    this->vertexPtrArray = new Vertex*[V];          // create an array of Vertex pointers
    for (unsigned int i = 0; i < V; i++) {          // initialize the pointers to 0
        vertexPtrArray[i] = 0;
    }
}


Digraph::~Digraph() {
    Vertex* vertexPtr;
    Vertex* nextVertexPtr;
    for (unsigned int i = 0; i < totalVertices; i++) {
        vertexPtr = vertexPtrArray[i];
        while (vertexPtr) {
            nextVertexPtr = vertexPtr->nextVertexPtr;
            delete vertexPtr;
            if (nextVertexPtr) {
                vertexPtr = nextVertexPtr;
            }
            else {
                break;
            }
        }
    }
    delete[] vertexPtrArray;
}


void Digraph::addEdge(unsigned int v, unsigned int w) {
    Vertex* vertexIterPtr;
    if (vertexPtrArray[v] == 0) {                                           // if vertex list is empty, need to add first "tail" vertex
        vertexPtrArray[v] = new Vertex();                                   // create a new object and return its address to store in array
        vertexPtrArray[v]->vertexNum = w;                                   // assign the tail vertex number
        vertexPtrArray[v]->nextVertexPtr = 0;
        vertexPtrArray[v]->lastVertexPtr = vertexPtrArray[v];               // set lastVertexPtr to point to itself
    }
    else {                                                                  // if vertex list is not empty
        vertexIterPtr = vertexPtrArray[v]->lastVertexPtr;                   // use temporary pointer to point to last object
        vertexIterPtr->nextVertexPtr = new Vertex();                        // create new object and assign the last object's nextVertexPtr to point to new object
        vertexPtrArray[v]->lastVertexPtr = vertexIterPtr->nextVertexPtr;    // assign first object's lastVertexPtr to new object
        vertexIterPtr = vertexIterPtr->nextVertexPtr;                       // update temporary pointer to point to new object
        vertexIterPtr->lastVertexPtr = vertexIterPtr;                       // last object's lastVertexPtr points to itself
        vertexIterPtr->nextVertexPtr = 0;
        vertexIterPtr->vertexNum = w;                                       // assign the tail vertex number
    }
}


unsigned int Digraph::V() const {
    return totalVertices;
}
