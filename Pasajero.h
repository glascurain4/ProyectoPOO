#ifndef PASAJERO_H
#define PASAJERO_H

#include <iostream>
#include <string>
#include <vector>
#include <ctime>

#include "Movil.h"
#include "Avion.h"

using namespace std;

class Vuelo;

/*
------------------P A S A J E R O-----------------
*/


class Pasajero : public Movil {

  private:
  string nombre;
  vector<Vuelo*> vuelos;
  string salida;

  public:
//Constructores
  Pasajero() {
    nombre = "Pancho López";
    salida = "A1";
  }

  Pasajero(string _id, string _origen, string _destino, string _nombre, string _salida) : Movil(_id, _origen, _destino) {
    nombre = _nombre;
    salida = _salida;
  }

//Getters
  string getNombre() {
    return nombre;
  }
  vector<Vuelo*> getVuelos() {
    return vuelos;
  }
  string getSalida() {
    return salida;
  }

//Setters
  void setNombre(string _nombre) {
    nombre = _nombre;
  }
  void AgregarVuelo(Vuelo* vuelo) {
    vuelos.push_back(vuelo);
  }
  void setSalida(string _salida) {
    salida = _salida;
  }

//Métodos
  void imprimeDatos() {

    cout << "--------------------------------" << endl;
    
    cout << "Nombre: " << nombre << endl;
    
    Movil::ImprimeDatos();

    cout << "Salida: " << salida << endl;
  }
  void llamarPasajero() {
     cout << "--------------------------------" << endl;
    cout << nombre << " con destino a " << destino << " favor de presentarse en salida " << salida << endl;
  }
};

#endif