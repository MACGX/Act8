#include "Laboratorio.h"
#include <fstream>

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
    cout << left;
    cout << setw(10) << "Os" ;
    cout << setw(5) << "Ram";
    cout << setw(20) << "Cpu";
    cout << setw(15) << "Gpu";
    cout << endl; 
    for (size_t i = 0; i < cont; i++)
    {
        Computadora &c = arreglo[i];
        cout << c;
        //cout << "Sistema Operativo: " << p.getOs() << endl;
        //cout << "RAM: " << p.getRam() <<" GB " << endl;
        //cout << "CPU: " << p.getCPU() << endl;
        //cout << "GPU: " << p.getGPU() << endl;
        //cout << "--------------------------------"<<endl;
    }
}

void Laboratorio::respaldar()
{
    ofstream archivo("computadoras.txt");
    if(archivo.is_open())
    {
        for (size_t i = 0; i < cont; i++)
        {
        Computadora &c = arreglo[i];
        archivo << c.getOs() <<endl;
        archivo << c.getRam() <<endl;
        archivo << c.getCPU() <<endl;
        archivo << c.getGPU() <<endl;
        }
    }
    archivo.close();
}

void Laboratorio::recuperar()
{
    ifstream archivo("computadoras.txt");
    if (archivo.is_open())
    {
        string temp;
        int ram;
        Computadora c;

        while(true)
        {
            getline(archivo, temp);
            if (archivo.eof())
            {
                break;
            }
            c.setOs(temp);

            getline(archivo, temp);
            ram = stoi(temp);
            c.setRam(ram);

            getline(archivo, temp);
            c.setCPU(temp);

            getline(archivo, temp);
            c.setGPU(temp);

            agregarComputadora(c);

        }
    } 
    archivo.close();
}