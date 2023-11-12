#include <iostream>
#include <string>
#include <ctime>

#include "Avion.h"
#include "Pasajero.h"
#include "Vuelo.h"

using namespace std;

int main() {
  //Creamos la interfaz del usuario
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

if (input_contrasenia == contrasenia & input_usuario == usuario) {
  cout << endl;
  cout << "Bienvenido " << input_usuario << endl;
  cout << endl;
  cout << "Base de datos: " << endl;
  cout << "-----------------------"<< endl;
  
    //Creamos los objetos con constructor por omision
  Vuelo miVuelo;
  Avion miAvion;
    //Utilizamos metodo para asignar el avion creado a nuestro vuelo
  miAvion.asignarVuelo(miVuelo.getDestino());
  miAvion.imprimeDatos(); //Imprimimos los datos
  cout << "-----------------------"<< endl;
  Pasajero Pasajero1;
  Pasajero1.imprimeDatos();
    cout << "-----------------------"<< endl;
  miVuelo.imprimeDatos();

    miVuelo.retrasarVuelo(); //Utilizamos metodo para retrasar el horario de vuelo y lo volvemos a imprimir
    cout << "-----------------------"<< endl;
    miVuelo.imprimeDatos();
    cout << "-----------------------"<< endl;
    Pasajero1.setSalida(miVuelo.getSalida()); //Cambiamos salida del pasajero a la de nuestro vuelo
    Pasajero1.llamarPasajero(); //Llamamos al pasajero

}
else {
  cout << "Usuario y/o contraseña incorrectos" << endl;
}

return 0;  
}