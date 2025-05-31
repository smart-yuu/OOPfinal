#ifndef CIRCUIT_H
#define CIRCUIT_H
#include <vector>
#include "pat.h"

class Circuit{
  public:
    Circuit();
    void topologicalSort();
    vector<Pat> simulate(vector<Pat>);
};
#endif