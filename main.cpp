#include <iostream>
#include "circuit.h"
#include "parser.h"
#include "pat.h"

using namespace std;

int main(int* argc, char* argv[]){
  if(argc < 7){
    cout << "Error: Not executable\n";
    cout << "Please input as  /ls -i *.v -p *.pat -o *.out\n";
    exit(1);
  }
  Parser parser;
  parser.parseInput(argv[2],argv[4],argv[6]);

  Circuit *cir;
  parser.parseCircuit(cir);

  cir->topologicalSort();

  vector<Pat> inputs = parser.parseInputPattern();
  vector<Pat> outputs = cir->simulate(inputs);
  parser.output(outputs);
}