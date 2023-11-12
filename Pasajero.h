#include <iostream>
#include <string>
#include <ctime>

using namespace std;

/*
------------------P A S A J E R O-----------------
*/


class Pasajero {

  private:
  string nombre;
  int num_vuelo;
  string destino;
  string salida;

  public:
//Constructores
  Pasajero();
  Pasajero(string nom, int numv, string des, string sal);

//Getters
  string getNombre();
  int getNumVuelo();
  string getDestino();
  string getSalida();

//Setters
  void setNombre(string nom);
  void setNumVuelo(int numv);
  void setDestino(string des);
  void setSalida(string sal);

//Métodos
  void imprimeDatos();
  void llamarPasajero();
};

//Constructores ::Pasajero
Pasajero::Pasajero() {
  nombre = "Pancho López";
  num_vuelo = 1909;
  destino = "México";
  salida = "A1";
}
Pasajero::Pasajero(string nom, int numv, string des, string sal) {
  nombre = nom;
  num_vuelo = numv;
  destino = des;
  salida = sal;
}

// Getters ::Pasajero
string Pasajero::getNombre() {
  return nombre;
}

int Pasajero::getNumVuelo() {
  return num_vuelo;
}

string Pasajero::getDestino() {
  return destino;
}

//Setters ::Pasajero
void Pasajero::setNombre(string nom) {
  nombre = nom;
}
void Pasajero::setNumVuelo(int numv) {
  num_vuelo = numv;
}
void Pasajero::setDestino(string des) {
  destino = des;
}
void Pasajero::setSalida(string sal) {
  salida = sal;
}


//Metodos ::Pasajero
void Pasajero::imprimeDatos() {
  cout << "Nombre: " << nombre << endl;
  cout << "Número de vuelo: " << num_vuelo << endl;
  cout << "Destino: " << destino << endl;
  cout << "Salida: " << salida << endl;
}
void Pasajero::llamarPasajero() {
  cout << nombre << " con destino a " << destino << ", del vuelo " << num_vuelo << " favor de presentarse en salida " << salida << endl;
}
