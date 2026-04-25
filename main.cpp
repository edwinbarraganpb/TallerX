#include <iostream>

using namespace std;

//funcion que recibe parametros por valor
double calcularDoble(double dato)
{
    dato = dato * 2;
    return dato;
}

//funcion que recibe parametros por referencia
double calcularTriple(double &dato)
{
    dato = dato * 3;
    return dato*3;
}


void calcularIndiceMasaCorporal(double peso, double estatura)
{
    double total =(peso/(estatura*estatura));
    cout<<total<<endl;
}
//sobrecarga de función: otra forma de invocar la función: cantidad de parametros
//en sobrecarga, DEBE cambiar la cantidad y/o tipo de parámetros de entrada
//un valor por defecto en el parámetro estatura
void calcularIndiceMasaCorporal(double estatura=1.6)
{
    //valor por defecto para el peso
    double total =(50/(estatura*estatura));
    cout<<total<<endl;
}

void mostrarInfo(double info)
{
    cout<<"\nvalor de la variable info:";
    cout<<info;
}

int main()
{
    //calcular el indice de masa corporal de una persona
    cout<<"resultados:\n";
    double peso=61, estatura=1.70, recibirTotal, info = 2;
    //invocaciones de la función calcularIndiceMasaCorporal (sobrecargada)
    calcularIndiceMasaCorporal();
    calcularIndiceMasaCorporal(estatura);
    calcularIndiceMasaCorporal(peso,estatura);
    //invocacion con parametro por valor
    recibirTotal = calcularDoble(info);
    mostrarInfo(info);
    //invocacion con parametro por referencia
    recibirTotal = calcularTriple(info);
    mostrarInfo(info);

    
    return 0;
}

