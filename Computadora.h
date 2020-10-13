#ifndef COMPUTADORA_H
#endif
#define COMPUTADORA_H

#include <iostream>
using namespace std;
class Computadora 
{
    string Os;
    int Ram;
    string Cpu;
    string Gpu;
public:
    Computadora();
    Computadora(const string &Os,
                const int Ram, 
                const string &Cpu,
                const string &Gpu);
void setOs(const string &v);
string getOs();
void setRam(const int v);
int getRam();
void setCPU(const string &v);
string getCPU();
void setGPU(const string &v);
string getGPU();

};