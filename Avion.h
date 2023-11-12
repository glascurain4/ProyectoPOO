#include <iostream>
#include <string>
#include <ctime>

using namespace std;

/*
----------------------A V I O N------------------------
*/

class Avion {

  private:

  string modelo;
  string aerolinea;
  float longitud;
  int capacidad;
  string vuelo_asignado;
  bool disponibilidad;

  public:
//Constructores
  Avion();
  Avion(string mod, string aero, float lon, int cap, string vuelo, bool disp);
//Getters
  string getModelo();
  string getAerolinea();
  float getLongitud();
  int getCapacidad();
  string getVueloAsignado();
  bool getDisponibilidad();

//Setters
  void setModelo(string mod);
  void setAerolinea(string aero);
  void setLongitud(float lon);
  void setCapacidad(int cap);
  void setVueloAsignado(string vuelo);
  void setDisponibilidad(bool disp);
//Métodos
  void imprimeDatos();
  void asignarVuelo(string vuelo);
};
//Constructores ::Avion
Avion::Avion() {
  modelo = "Embraer E190";
  aerolinea = "Aeromexico";
  longitud = 36.4;
  capacidad = 100;
  vuelo_asignado = "Ninguno";
  disponibilidad = true;
}
Avion::Avion(string mod, string aero, float lon, int cap, string vuelo, bool disp) {
  modelo = mod;
  aerolinea = aero;
  longitud = lon;
  capacidad = cap;
  vuelo_asignado = vuelo;
  disponibilidad = disp;
}
//Getters ::Avion
string Avion::getModelo() {
  return modelo;
}
string Avion::getAerolinea() {
  return aerolinea;
}
float Avion::getLongitud() {
  return longitud;
}
int Avion::getCapacidad() {
  return capacidad;
}
string Avion::getVueloAsignado() {
  return vuelo_asignado;
}
bool Avion::getDisponibilidad() {
  return disponibilidad;
}

//Setters ::Avion
void Avion::setModelo(string mod) {
  modelo = mod;
}
void Avion::setAerolinea(string aero) {
   aerolinea = aero;
}
void Avion::setLongitud(float lon) {
  longitud = lon;
}
void Avion::setCapacidad(int cap) {
  capacidad = cap;
}
void Avion::setVueloAsignado(string vuelo) {
  vuelo_asignado = vuelo;
}
void Avion::setDisponibilidad(bool disp) {
  disponibilidad = disp;
}

//Metodos ::Avion
void Avion::imprimeDatos() {
  cout << "Modelo: " << modelo << endl;
  cout << "Aerolinea: " << aerolinea << endl;
  cout << "Longitud: " << longitud << " metros" << endl;
  cout << "Capacidad: " << capacidad << " pasajeros" << endl;
  cout << "Vuelo Asignado: " << vuelo_asignado << endl;
  if (disponibilidad == true) {
    cout << "Disponibilidad: " << "Si" << endl;
  }
  else if (disponibilidad == false) {
    cout << "Disponibilidad: " << "No" << endl;
  }
}
void Avion::asignarVuelo(string vuelo) {
  vuelo_asignado = vuelo;
  disponibilidad = false;
}