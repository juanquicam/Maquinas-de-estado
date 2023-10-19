
#include <iostream>



class Trayectoria
{
private:
	bool recepcion[5] = {0,0,0,0,0};
	bool salida[4] = { 0,0,0,0 };
	float coordenada;
	//data,espera,comparador,error_transmision,comparador;
public:
	Trayectoria();
	Trayectoria(bool[5]);	//entrada 
	//Trayectoria(bool[4]);	//salida 
	//void setnumero();
	//int 
	bool numero(bool[5]);	//estado"numero de datos"
	bool espera(bool[5]);	//estado "espera de datos "
	bool rango(bool[5]);	//estado "rango de los datos"
	bool error(bool[5]);	//estado "interrupción de la transmision"
	bool genesenal(bool[5]);//estado "envio de señal a la FSM_principal"
	bool final();


	//numero de datos 
	/*
	2. espera de datos de trayectoria }
	3, interrupción en la transmision
	4. generacion de que la señal fue recibida 
	*/





};

