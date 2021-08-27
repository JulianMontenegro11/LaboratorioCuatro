#include "red.h"

void red::agregar_nodo(char name_nodo)
{
    enrutador x;
    int valor,contador_nodos;
    if(Red.find(name_nodo)==Red.end()){
     cout<<"Los nodos existentes son los siguientes, se recomienda continuar en orden alfabetico."<<endl;
    for(ite_red=Red.begin();ite_red!=Red.end();ite_red++) {
        cout<<ite_red->first<<endl;
        contador_nodos++;}
    for(int i=0;i<=(contador_nodos+1);i++){
        cout<<"Ingrese el valor del enlace entre "<< name_nodo << " y "<<Letra+i <<" (de no haber enlace ingresar el valor '-1'): "<<endl;
        cin>>valor;
        if(name_nodo==Letra+i) {
            valor=0;
        }
        x.Agregar_enlace(Letra+i,valor);
    }
    Red.insert(pair<char,enrutador>(name_nodo,x));

    }
}

void red::eliminar_nodo(char name_nodo)
{
    if(Red.find(name_nodo)!=Red.end())Red.erase(name_nodo);
    for(ite_red=Red.begin();ite_red!=Red.end();ite_red++){
        Red[ite_red->first].eliminar_enlace(name_nodo);
    }
}

void red::modificar_nodo(char name_nodo)
{
    int contador_nodos, valor;
    char modifica;
    if(Red.find(name_nodo)!=Red.end()){
        for(ite_red=Red.begin();ite_red!=Red.end();ite_red++) {
            cout<<ite_red->first<<endl;
            contador_nodos++;
        }
        cout<<"Ingrese el nodo con el que desea modificar en el enlace"<<endl;
        cin>>modifica;
        cout<<"Ingrese el nuevo valor del enlace, de no existir enlace ingrese el valor '-1'"<<endl;
        cin>>valor;
        Red[name_nodo].modificar_enlace(modifica,valor);

    }
}
