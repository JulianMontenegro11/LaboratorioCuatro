#include "red.h"

int main()
{
   enrutador Z,Y,X;
   Z.Agregar_enlace('A',3);
   Z.Agregar_enlace('B',21);
   Z.Agregar_enlace('C',46);
   Y.Agregar_enlace('A',61);
   Y.Agregar_enlace('B',-1);
   Y.Agregar_enlace('C',5);
   X.Agregar_enlace('A',-1);
   X.Agregar_enlace('B',44);
   X.Agregar_enlace('C',-1);
   Z.eliminar_enlace('B');
   Z.visualizar();
   Y.visualizar();
   X.visualizar();
   return 0;
}
