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
    void lectura_red(string nombre_archivo);
    void agregar_por_lectura(char nodo1, char nodo2, char enlace,char enlace2);
    void modificar_lectura(char nodo1,char nodo2,char enlace,char enlace2); // modifica despues de tener el enrutador neutro
    void completar_lectura(string nombre_archivo);// funcion permite modificar los enlaces de la matriz leida por archivo de texto
private:
    map<char,enrutador> Red;
    map<char,enrutador>::iterator ite_red;

};

#endif // RED_H
