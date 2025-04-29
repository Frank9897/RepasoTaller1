/*
*    AUTHOR: Catedra de lenguajes de Taller 1 
*    DATE: 04/2025
*    LICENCE: Creative Commons 
*/

#include "funciones.h"


// DECLARE SUS FUNCIONES ACA

int main() 
{    
    Producto * TodosLosProductos  = ProductoElectronicos();

    MostrarProductosDeArreglo(TodosLosProductos, 40, "Productos de Proveedor 1");

   

    /*fin del programa*/
    printf("\nFin programa\n"); 
    return 0;
}

// IMPLEMENTE SUS FUNCIONES ACA