#include "red.h"
#include "menu.h"

int main()
{
 //red a;
//a.lectura_red("prueba.txt");
//a.Visualizar_matriz();
//a.completar_lectura("prueba.txt");
//a.Visualizar_matriz();
//a.modificar_nodo('A');
//a.Visualizar_matriz();
red enrut;
int num1,num2,num3,num4;
bool bool1= true;
char nom_nodo;
while(bool1==true){
cout<<"Por favor lea las opciones y elija la de su preferencia."<<endl;
cout<<" 1 si desea modificar nodos\n 2 si desea modificar un enlace\n 3 visualizar la tabla de la red\n 4 si desea saber cual es el camino mas optimo\n 5 si desea una red aleatoria\n 6 si desea salir"<<endl;
cin>>num1;
bool1=false;

if(num1==1){
    cout<<"Por favor lea las opciones y elija la de su preferencia."<<endl;
    cout<<" 1 si desea agregar o eliminar un nodo\n 2 si desea agregar un enrutador por archivo de texto."<<endl;
    cin>>num2;
    if(num2==1){
        cout<<"Por favor lea las opciones y elija la de su preferencia."<<endl;
        cout<<"1 si desea agregar un nodo\n 2 si desea eliminar un nodo"<<endl;
        cin>>num4;

        if(num4==1){
        bool a=true;

        char letra=65;
        int i=0, aa;
        while (a==true) {
            letra=65;
            letra=letra+i;
            enrut.agregar_nodo(letra);
            cout<<"¿desea agregar otro nodo?\n 1 si\n 2 no"<<endl;
            cin>>aa;
            if(aa==1){
                i++;
            }else {
                a=false;

        }
}
        }
        else{
            bool a=true;
            int b;
            char letra;
            while(a==true){
                cout<<"ingrese el nodo que desea eliminar;"<<endl;
                cin>>letra;
                enrut.eliminar_nodo(letra);
                cout<<"¿Desea eliminar otro nodo?\n 1 si\n 2 no"<<endl;
                cin>>b;
                if(b==2){
                    a=false;
                }

            }
        }
        bool1=true;
    }
    else{
        string archivo;
        cout<<"por favor ingrese el nombre del archivo"<<endl;
        cin>>archivo;

        enrut.lectura_red(archivo);
        enrut.completar_lectura(archivo);
        bool1=true;
    }
}
if(num1==2){
      char nodo;

        bool a=true;
        while (a==true) {
        int aa;
            cout<<"Por favor ingrese en nombre del nodo que desea modificar"<<endl;
            cin>>nodo;

            enrut.modificar_nodo(nodo);
            cout<<"¿desea modificar otro enlace?\n 1 si\n 2 no"<<endl;
            cin>>aa;
            if(aa==1){
             a=true;
            }else {
                a=false;
            }
        }



        bool1=true;
    }
if(num1==3){
    enrut.Visualizar_matriz();
    bool1= true;
}

}

}

