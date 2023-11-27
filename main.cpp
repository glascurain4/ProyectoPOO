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
  // Creamos la interfaz del usuario
  string usuario = "A01707236";
  string contrasenia = "Contraseña";
  string input_usuario;
  string input_contrasenia;
  cout << "----------------AEROPUERTO----------------" << endl;
  cout << endl;
  cout << "Introduzca usuario: " << endl;
  cin >> input_usuario;
  cout << "Introduzca contraseña: " << endl;
  cin >> input_contrasenia;
  if (input_contrasenia == contrasenia && input_usuario == usuario) {
    cout << endl;
    cout << "Bienvenido " << input_usuario << endl;
    cout << endl;
    cout << "Base de datos: " << endl;
//Creamos objetos y los ponemos a prueba con sus métodos
    Avion miAvion("A121", "MEX", "N/A", "Embraer E190", "Aeromexico", 100, true);
    Vuelo miVuelo("A122", "MEX", "DFW", "", "0:00", "A1");
    miVuelo.setAvion(miAvion.getId() + " - " + miAvion.getModelo());
    Pasajero miPasajero;
    miPasajero.setOrigen(miVuelo.getOrigen());
    miPasajero.setDestino(miVuelo.getDestino());
    
    miAvion.imprimeDatos();
    miVuelo.imprimeDatos();
    miPasajero.imprimeDatos();

    miVuelo.retrasarVuelo();

    miPasajero.llamarPasajero();

    miAvion.setDestino(miVuelo.getDestino());
    miAvion.imprimeDatos();
  }
  else {
    cout << "Usuario y/o contraseña incorrectos" << endl;
  }
  return 0;
}