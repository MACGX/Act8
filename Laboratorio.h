#ifndef LABORATORIO_H
#endif
#define LABORATORIO_H

#include "Computadora.h"
#include <iostream>
using namespace std;

class Laboratorio
{
    Computadora arreglo[5];
    size_t cont;
    public:
    Laboratorio();
    void agregarComputadora(const Computadora &p);
    void mostrar();
};
