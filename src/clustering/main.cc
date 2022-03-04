// Copyright 2022, MIT
// Authors: Xuhao Chen <cxh@mit.edu>
#include "graph.hh"

void Clustering(Graph &g, int *clusters);

int main(int argc, char *argv[]) {
  if (argc < 2) {
    printf("Usage: %s <graph>\n", argv[0]);
    exit(1);
  }
  std::cout << "Graph Clustering\n";
  Graph g(argv[1]);
  auto m = g.size();
  auto nnz = g.sizeEdges();
  std::cout << "|V| " << m << " |E| " << nnz << "\n";
  int *clusters;
  Clustering(g, clusters);
  return 0;
}

