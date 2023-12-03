#include <iostream>
#include <string>
#include <ctime>
#include <vector>

#include "Movil.h"
#include "Vuelo.h"
#include "Pasajero.h"
#include "Avion.h"

using namespace std;
int main() {
  cout << "----------------AEROPUERTO----------------" << endl;
  cout << endl;
    cout << "Base de datos: " << endl;
//Creamos objetos con constructores
    Avion miAvion("A121", "MEX", "", "Embraer E190", "Aeromexico", 100, true);
    Vuelo miVuelo("A122", "MEX", "DFW", "", "0:00", "A1");
    Pasajero miPasajero;
  
    miPasajero.setOrigen(miVuelo.getOrigen()); //Asignamos los datos de nuestro vuelo al pasajero
    miPasajero.setDestino(miVuelo.getDestino());
    miPasajero.setSalida(miVuelo.getSalida());

  //Imprimimos los datos de nuestros objetos creados
    miAvion.imprimeDatos();
    miVuelo.imprimeDatos();
    miPasajero.imprimeDatos();

    miVuelo.setAvion(miAvion.getId() + " - " + miAvion.getModelo()); //Asignamos datos del avion a nuestro vuelo
    miVuelo.retrasarVuelo(); //Probamos funcion de Vuelo y vemos los cambios creados

    miPasajero.llamarPasajero(); //Probamos funcion de pasajero

    miAvion.setDestino(miVuelo.getDestino());
    miAvion.imprimeDatos(); //Asignamos datos del vuelo al avion y imprimimos datos para ver los cambios

  return 0;
}