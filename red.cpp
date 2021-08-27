#include "red.h"

void red::agregar_nodo(char name_nodo)
{
    enrutador x;
    int valor,contador_nodos=0;
    char a=65;
    char aux;
     aux=a;
    if(Red.find(name_nodo)==Red.end()){
     cout<<"Los nodos existentes son los siguientes:\n"<<endl;
    for(ite_red=Red.begin();ite_red!=Red.end();ite_red++) {
        cout<<ite_red->first<<endl;
        contador_nodos++;}
    for(int i=0;i<=(contador_nodos);i++){
        aux=a;
        aux=aux+i;
        cout<<"Ingrese el valor del enlace entre "<< name_nodo << " y "<<aux<<" (de no haber enlace ingresar el valor '-1'): "<<endl;
        cin>>valor;
        if(name_nodo==aux) {
            valor=0;
        }
        modificar_al_agregar(aux,name_nodo,valor);

        x.Agregar_enlace(a+i,valor);

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
        cout<<"Ingrese el nodo con el que desea modificar el enlace con "<< name_nodo<<endl;
        cin>>modifica;
        cout<<"Ingrese el nuevo valor del enlace, de no existir enlace ingrese el valor '-1'"<<endl;
        cin>>valor;
        Red[name_nodo].modificar_enlace(modifica,valor);
        modificar_pareja(modifica,name_nodo,valor);

    }
}

void red::Visualizar_matriz()
{
    for(ite_red=Red.begin();ite_red!=Red.end();ite_red++){
        cout<<"\t"<<ite_red ->first;
    }
    cout<<'\n';

    for(ite_red=Red.begin();ite_red!=Red.end();ite_red++){
        cout<<ite_red->first<<'\t';
        ite_red->second.visualizar();

    }
    cout<<'\n';

}

void red::modificar_al_agregar(char name_nodo,char modifica, int valor)
{
    int contador_nodos=0;
    if(Red.find(name_nodo)!=Red.end()){
        for(ite_red=Red.begin();ite_red!=Red.end();ite_red++) {
            contador_nodos++;
        Red[name_nodo].Agregar_enlace(modifica,valor);

}
    }
}

void red::modificar_pareja(char name_nodo, char modifica, int valor)
{
    int contador_nodos=0;
    if(Red.find(name_nodo)!=Red.end()){
        for(ite_red=Red.begin();ite_red!=Red.end();ite_red++) {
            contador_nodos++;
            Red[name_nodo].modificar_enlace(modifica,valor);

}
}
}

