#ifndef ENRUTADOR_H
#define ENRUTADOR_H
# include <iostream>
#include <map>
#include <stdlib.h>

using namespace std;

class enrutador{
public:
    void modificar_enlace(char name_nodo,int valor);
    void eliminar_enlace(char name_nodo);
    void Agregar_enlace(char name_nodo,int valor_neutro);
    void visualizar();
    void anular_enlace(char name_nodo);
private:
map<char,int> Enrutador;
map<char,int>::iterator ite_enrutador;
};

#endif // ENRUTADOR_H
