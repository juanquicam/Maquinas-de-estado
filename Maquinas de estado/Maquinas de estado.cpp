// Maquinas de estado.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
#include <string.h>
#include"tratectoria.h"

int main()
{
    bool entrada[5] = { 0,0,0,0,0 };//entrada de la primera maquiana
    int cantdatos = 0;
    int check = 0;
    bool salida[4] = { 0,0,0,0 }; //salida de datos 
    Trayectoria(en [5]);


    do {
        do {
        cout << "Ingrese la cantidad de coordenadas que desea ejecutar: " << endl;
        cin >> cantdatos;
        switch (cantdatos)
        {
            case()


        default:
            break;
        }
        if (cantdatos <= 0) {
          //no se hace nada, solo se corrobora que la cantidad de datos almacenada sea correcta 
        }
        else {
            salida[2] = 1;
            check=1;
            for (int i = 0; i < 4; i++) {
                cout << salida[i] << "  ";
            }
        }
        }while (check == 1);//termino el primer estado 
        
    } while (check == 5);
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
