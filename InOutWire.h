#ifndef INOUTWIRE_H
#define INOUTWIRE_H
#include <string>
#include "pat.h"

using namespace std;

class InOutWire
{
private:
    string name;
    int ValueHold;
public:
    InOutWire();
    ~InOutWire();
};

class Input :public InOutWire{
private:
    /* data */
public:
    Input(/* args */);
    ~Input();
};

class Output: public InOutWire{
private:
    /* data */
public:
    Output(/* args */);
    ~Output();
};

class Wire: public InOutWire{
private:
    /* data */
public:
    Wire(/* args */);
    ~Wire();
};

#endif