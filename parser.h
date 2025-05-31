#ifndef PARSER_H
#define PARSER_H
#include <fstream>
#include <string>
#include <vector>
#include "pat.h"
#include "circuit.h"

using namespace std;

class Parser{
  public:
  void parseInput(string,string,string);
  void parseCircuit(Circuit* );
  vector<Pat> parseInputPattern();
  void output(vector<Pat>);
  private:
    string circuitFile;
    string inputFile;
    string outputFile;
};
#endif