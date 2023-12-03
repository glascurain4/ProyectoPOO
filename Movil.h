#ifndef MOVIL_H
#define MOVIL_H

#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using namespace std;

/* 
--------------- M Ó V I L (PADRE) -------------
*/

class Movil {
protected: //Establecemos las variables que heredaremos a las demás clases
string id;
string origen;
string destino;

public:

//Constructores
Movil() {
  id = "A123";
  origen = "MEX";
  destino = "MEX";
};
Movil(string _id, string _origen, string _destino) {
  id = _id;
  origen = _origen;
 destino = _destino;
}

//Getters
string getId() {
  return id;
}
string getOrigen() {
  return origen;
}
string getDestino() {
  return destino;
}

//Setters
void setId(string _id) {
  id = _id;
}
void setOrigen(string _origen) {
  origen = _origen;
}
void setDestino(string _destino) {
  destino = _destino;
}

//Metodos (reutilizable en clases hijas)
virtual void ImprimeDatos() {
  cout << "ID: " << id << endl;
  cout << "Origen: " << origen << endl;
  cout << "Destino: " << destino << endl;
}

};

#endif