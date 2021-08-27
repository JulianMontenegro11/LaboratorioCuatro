#include "enrutador.h"

void enrutador::modificar_enlace(char name_nodo, int valor)
{
    if(Enrutador.find(name_nodo)!=Enrutador.end()) Enrutador[name_nodo]=valor;
}

void enrutador::eliminar_enlace(char name_nodo)
{
    if(Enrutador.find(name_nodo)!=Enrutador.end())Enrutador.erase(name_nodo);
}


void enrutador::anular_enlace(char name_nodo)
{
     if(Enrutador.find(name_nodo)!=Enrutador.end())Enrutador[name_nodo]=-1;
}


void enrutador::Agregar_enlace(char name_nodo, int valor_neutro)
{
    if(Enrutador.find(name_nodo)==Enrutador.end()){
        Enrutador.insert(pair<char,int>(name_nodo,valor_neutro));
    }
}

void enrutador::visualizar()
{
    for(ite_enrutador=Enrutador.begin();ite_enrutador!=Enrutador.end();ite_enrutador++){
    cout<<ite_enrutador ->second<<"\t";

    }
    cout<<'\n';

   // for(ite_enrutador=Enrutador.begin();ite_enrutador!=Enrutador.end();ite_enrutador++){
    //cout<<ite_enrutador ->second<<"       ";
    //}
   // cout<<'\n';
}


