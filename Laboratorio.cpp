#include "Laboratorio.h"

Laboratorio::Laboratorio()
{
    cont = 0;
}

void Laboratorio::agregarComputadora(const Computadora &p)
{
    if (cont < 5)
    {
        arreglo[cont] = p;
        cont++;
    }
    else 
    {
        cout << "Lleno"<< endl;
    }
}

void Laboratorio::mostrar()
{
    for (size_t i = 0; i < cont; i++)
    {
        Computadora &p = arreglo[i];
        cout << "Sistema Operativo: " << p.getOs() << endl;
        cout << "RAM: " << p.getRam() <<" GB " << endl;
        cout << "CPU: " << p.getCPU() << endl;
        cout << "GPU: " << p.getGPU() << endl;
        cout << "--------------------------------"<<endl;
    }
    
}