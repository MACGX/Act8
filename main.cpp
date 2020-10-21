#include <iostream>
#include "Laboratorio.h"
using namespace std;

int main() {

    Computadora intel = Computadora(    "Windows",  
                                        16,
                                        "I7 10ma generacion",
                                        "GTX 1050 Ti");
    Computadora amd = Computadora(      "Linux",  
                                        32,
                                        "Ryzen7 3700X",
                                        "Radeon VII");
Computadora c1;
c1.setOs("Windows");
c1.setRam(64);
c1.setCPU("Ryzen 7 5800X");
c1.setGPU("RTX 3090");

Laboratorio lab;

lab.agregarComputadora(intel);
lab.agregarComputadora(amd);
lab.agregarComputadora(c1);

Computadora c2;
cin >> c2;

lab << c2;

lab.mostrar();

cout << c1; 

    return 0;
}