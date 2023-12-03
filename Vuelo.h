#ifndef VUELO_H
#define VUELO_H

#include <iostream>
#include <string>
#include <ctime>

#include "Movil.h"

using namespace std;

class Pasajero;

/*
-----------------------V U E L O------------------------
*/

class Vuelo : public Movil {
  private:
  string avion;
  vector<Pasajero*> pasajeros;
  string hora_salida;
  string salida;

  public:
//Constructores
  Vuelo() {
    avion = "";
    hora_salida = "";
    salida = "";
  }
  Vuelo(string _id, string _origen, string _destino, string _avion, string _hora_salida, string _salida) : Movil(_id, _origen, _destino) {
    avion = _avion;
    hora_salida = _hora_salida;
    salida = _salida;
  }
//Getters
  string getAvion() {
    return avion;
  }
  string getHoraSalida() {
    return hora_salida;
  }
  vector<Pasajero*> getPasajeros() {
    return pasajeros;
  }
  string getSalida() {
    return salida;
  }
//Setters
  void setAvion(string _avion) {
    avion = _avion;
  }
  void setHoraSalida(string _hora_salida) {
    hora_salida = _hora_salida;
  }

  void setSalida(string _salida) {
    salida = _salida;
  }
// No es necesario el setPasajeros

//Metodos
void AgregarPasajero(Pasajero* pasajero) {
  pasajeros.push_back(pasajero);
}
void imprimeDatos() {

  cout << "--------------------------------" << endl;

  ImprimeDatos(); //Reutilizamos método de la clase padre

  cout << "Avion: " << avion << endl;

  cout << "Horario de salida: " << hora_salida << " hrs" << endl;

  cout << "Salida: " << salida << endl;
}

  void retrasarVuelo() {
    string n_hora;
    cout << "Ingrese nuevo horario para vuelo " << origen << "-" << destino << " " << hora_salida << endl;
    cin >> n_hora;
    hora_salida = n_hora;
    cout << "Se ha actualizado el horario de salida para el vuelo " << origen << "-" << destino << " para las " << n_hora << " hrs" << endl;
    imprimeDatos(); //Reutilizamos método propio
  }
};

#endif