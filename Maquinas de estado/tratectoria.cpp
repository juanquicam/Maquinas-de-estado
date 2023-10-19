#include "tratectoria.h"
using namespace std;
Trayectoria::Trayectoria() {
	this->recepcion[5] = recepcion[5];
	this->salida[4] = salida[4];
	this->coordenada = coordenada;

};


Trayectoria::Trayectoria(bool recepcion[5]) {
	this->recepcion[5] = recepcion[5];
};


bool Trayectoria::numero(bool recepcion[5]) {
	return salida[2] = 1;
}

bool Trayectoria::espera(bool recepcion[5]) {
	//return salida[1] = 1;
	return salida[2] = 1;

}

bool Trayectoria::rango(bool recepcion[5]) {

	return salida[3] = 1;
}
bool Trayectoria::genesenal(bool recepcion[5]) {
	/*
	return salida[1] = 1;
	return salida[2] = 1;
	return salida[3] = 1;*/

	return salida[4] = 1;
}

bool Trayectoria::final() {
   // bool entrada[5] = { 0,0,0,0,0 };//entrada de la primera maquiana
    int cantdatos = 0;
    int check = 0;
    int coordenadas;
    //bool salida[4] = { 0,0,0,0 }; //salida de datos 



    do {
        while(check<=1) {//Primer caso 
            cout << "Ingrese la cantidad de coordenadas que desea ejecutar: " << endl;
            cin >> cantdatos;
            if (cantdatos <= 0) {
                //no se hace nada, solo se corrobora que la cantidad de datos almacenada sea correcta 
            }     
            if else
            else {
                salida[2] = 1;
                check = 1;
            }
        }//termino el primer estado 
        do {

        }

    } while (check == 6);
}