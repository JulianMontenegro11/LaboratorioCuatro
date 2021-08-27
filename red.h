#include "enrutador.h"
#ifndef RED_H
#define RED_H

class red{
public:
    void agregar_nodo(char name_nodo);
    void eliminar_nodo(char name_nodo);
    void modificar_nodo(char name_nodo);
    void Visualizar_matriz();
    void modificar_al_agregar(char name_nodo,char modifica, int valor);
    void modificar_pareja(char name_nodo,char modifica,int valor);
private:
    map<char,enrutador> Red;
    map<char,enrutador>::iterator ite_red;

};

#endif // RED_H
