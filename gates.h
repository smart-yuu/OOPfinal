#ifndef GATE_H
#define GATE_H

#include <string>
#include <vector>
using namespace std;

class Gate {
public:
    int input;
    int output;

    Gate();
    virtual char evaluate() = 0;
    virtual ~Gate() {}
};

#endif