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

void red::lectura_red(string nombre_archivo)
{

    char nodo1,nodo2,enlace,enlace2,aux,aux2,mayor,menor,a=65;
    int tam;
    fstream texto;
    texto.open(nombre_archivo,fstream::in|fstream::ate);
    if(texto.is_open()){
        tam=texto.tellg();
        texto.seekg(0);
        int i=0;
        while (i<tam) {

            for(int k=1;k<=8;k++){
                aux=texto.get();
                i++;

               if(k==2 || k==4){

               }
               if(k==1){
                   nodo1=aux;

               }
               if(k==3){
                   nodo2=aux;

               }
               if(k==5){
                   enlace=aux;

               }
               if(k==6){
                   if(aux=='\n'){
                       enlace2='0';
                        k=0;

                       menor=a;

                       if(nodo1>nodo2){
                           mayor=nodo1;
                       }
                       if(nodo2>nodo1){
                           mayor=nodo2;
                       }

                   }
                   else enlace2=aux;

               }
               if(k==7){
                   if(aux=='\n'){


                       menor=a;

                       for(char a=65;a<=mayor;a++){
                       agregar_por_lectura(menor,a,enlace,enlace2);
    }
                        k=0;


                   }
                   else enlace2=aux;

               }




               if(nodo1>nodo2){
                   mayor=nodo1;
                   menor=nodo2;
               }

               if(nodo2>nodo1){
                   mayor=nodo2;
                   menor=nodo1;
               }





            }


        }
    } else {
        cout<<" No se pudo abrir el archivo"<<endl;
        texto.close();}



}

void red::agregar_por_lectura(char menor, char name_nodo, char enlace,char enlace2)
{
    enrutador x;
    int valor,contador_nodos=0,enlace_real;
    char a=65;
    char aux;
    enlace_real=((enlace-48)*10)+enlace2-48;
     aux=a;
    //if(Red.find(name_nodo)==Red.end()){

    for(char a=65;a<=name_nodo;a++) {

        contador_nodos++;}
    for(int i=0;i<=(contador_nodos);i++){
        aux=a;
        aux=aux+i;

        valor=-1;
        if(name_nodo==aux) {
            valor=0;
        }
        modificar_al_agregar(aux,name_nodo,valor);

        x.Agregar_enlace(a+i,valor);


    }
    Red.insert(pair<char,enrutador>(name_nodo,x));
    modificar_lectura(name_nodo,menor,enlace_real);






}

void red::modificar_lectura(char nodo1, char nodo2, int valor)
{
    int contador_nodos;
    char modifica=nodo2;
    if(Red.find(nodo1)!=Red.end()){
        for(ite_red=Red.begin();ite_red!=Red.end();ite_red++) {
            contador_nodos++;
        }
        Red[nodo1].modificar_enlace(modifica,valor);
        modificar_pareja(modifica,nodo1,valor);


}
}




