#ifndef AVION_H
#define AVION_H

#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <sstream>

#include "Movil.h"

using namespace std;

class Vuelo;
class Pasajero;
/*
----------------------A V I O N------------------------
*/

class Avion : public Movil {

  private:

  string modelo;
  string aerolinea;
  int capacidad;
  vector<Vuelo*> vuelos;
  vector<Pasajero*> pasajeros;
  bool disponibilidad;

  public:
//Constructores
  Avion() : Movil() {
    modelo = "Embraer E190";
    aerolinea = "Aeromexico";
    capacidad = 100;
    disponibilidad = false;
  }

  Avion(string _id, string _origen, string _destino, string _modelo, string _aerolinea, int _capacidad, bool _disponibilidad) : Movil(_id, _origen, _destino) {
    modelo = _modelo;
    aerolinea = _aerolinea;
    capacidad = _capacidad;
    disponibilidad = _disponibilidad;
  }

//Getters
  string getModelo() {
    return modelo;
  }
  string getAerolinea() {
    return aerolinea;
  }
  int getCapacidad() {
    return capacidad;
  }
  vector<Vuelo*> getVuelos() {
    return vuelos;
  }
vector<Pasajero*> getPasajeros() {
  return pasajeros;
}
  bool getDisponibilidad() {
    return disponibilidad;
  }

//Setters
  void setModelo(string _modelo) {
    modelo = _modelo;
  }
  void setAerolinea(string _aerolinea) {
    aerolinea = _aerolinea;
  }
  void setCapacidad(int _capacidad) {
    capacidad = _capacidad;
  }
  void AgregarVuelo(Vuelo* vuelo) {
    vuelos.push_back(vuelo);
  }
  void AgregarPasajero(Pasajero* pasajero) {
    pasajeros.push_back(pasajero);
  }
  void setDisponibilidad(bool _disponibilidad) {
    disponibilidad = _disponibilidad;
  }
//Métodos
  void imprimeDatos() {
    
    if (destino != "N/A") {
      disponibilidad = false;}
    
    cout << "--------------------------------" << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Aerolinea: " << aerolinea << endl;
    Movil::ImprimeDatos();
    cout << "Capacidad: " << capacidad << " pasajeros" << endl;
    if (disponibilidad == true) {
      cout << "Disponibilidad: " << "Si";
    }
    else if (disponibilidad == false) {
      cout << "Disponibilidad: " << "No";
    }
    cout << endl;
  }
};

#endif
