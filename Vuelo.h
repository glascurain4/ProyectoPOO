#include <iostream>
#include <string>
#include <ctime>

using namespace std;

/*
-----------------------V U E L O------------------------
*/

class Vuelo {
  private:
  string origen;
  string hora_salida;
  string destino;
  string salida;

  public:
//Constructores
  Vuelo();
  Vuelo(string ori, string hora, string des, string sal);
//Getters
  string getOrigen();
  string getHoraSalida();
  string getDestino();
  string getSalida();
//Setters
  void setOrigen(string ori);
  void setHoraSalida(string hora);
  void setDestino(string des);
  void setSalida(string sal);
//Metodos
  void imprimeDatos();
  void retrasarVuelo();
};

//Constructores ::Vuelo
Vuelo::Vuelo() {
  origen = "MEX";
  hora_salida = "0:00";
  destino = "MEX";
  salida = "A12";
}
Vuelo::Vuelo(string ori, string hora, string des, string sal) {
  origen = ori;
  hora_salida = hora;
  destino = des;
  salida = sal;
}

// Getters ::Vuelo
string Vuelo::getOrigen() {
  return origen;
}

string Vuelo::getHoraSalida() {
  return hora_salida;
}

string Vuelo::getDestino() {
  return destino;
}
string Vuelo::getSalida() {
  return salida;
}

//Setters ::Vuelo
void Vuelo::setOrigen(string ori) {
  origen = ori;
}
void Vuelo::setHoraSalida(string hora) {
  hora_salida = hora;
}
void Vuelo::setDestino(string des) {
  destino = des;
}
void Vuelo::setSalida(string sal) {
  salida = sal;
}

//Metodos ::Vuelo
void Vuelo::imprimeDatos() {
  cout << "Origen: " << origen << endl;
  cout << "Hora de salida " << hora_salida << " hrs" << endl;
  cout << "Destino: " << destino << endl;
  cout << "Salida: " << salida << endl;
}
void Vuelo::retrasarVuelo() {
  string n_hora;
  cout << "Ingrese nuevo horario para vuelo " << origen << "-" << destino << " " << hora_salida << endl;
  cin >> n_hora;
  hora_salida = n_hora;
  cout << "Se ha actualizado el horario de salida para el vuelo " << origen << "-" << destino << " para las " << n_hora << " hrs" << endl;
}
