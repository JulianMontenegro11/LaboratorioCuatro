#include "red.h"

int main()
{
   red inv;
   inv.agregar_nodo('A');
   inv.agregar_nodo('B');
   inv.agregar_nodo('C');
   inv.agregar_nodo('D');
   inv.Visualizar_matriz();
   inv.modificar_nodo('A');
   inv.Visualizar_matriz();
   inv.modificar_nodo('C');
   inv.Visualizar_matriz();
   inv.eliminar_nodo('B');
   inv.Visualizar_matriz();
   inv.agregar_nodo('B');
   inv.Visualizar_matriz();
   inv.agregar_nodo('F');
   inv.Visualizar_matriz();
   return 0;
}
