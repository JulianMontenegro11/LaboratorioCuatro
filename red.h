#include "enrutador.h"
#ifndef RED_H
#define RED_H

class red{
public:
    red();
    void agregar_nodo(char name_nodo);
    void eliminar_nodo(char name_nodo);
    void modificar_nodo(char name_nodo);
private:
    map<char,enrutador> Red;
    map<char,enrutador>::iterator ite_red;
    char Letra= 65;
};

#endif // RED_H
