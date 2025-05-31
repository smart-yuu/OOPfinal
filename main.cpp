#include <iostream>
#include "circuit.h"
#include "parser.h"
#include "pat.h"

using namespace std;

int main(){
  Parser parser;
  parser.parseInput();
  Circuit *cir;
  parser.parseCircuit(cir);
  cir->topologicalSort();
  vector<Pat> inputs=parser.parseInputPattern();
  vector<Pat> outputs=cir->simulate(inputs);
  parser.output(outputs);
}