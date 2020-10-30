#include <iostream>

using namespace std;

int main() {

  string nombre;
  string carrera;
  int semestre;
  bool continuar;

  continuar = true;

  while (continuar == true){

    cout << "Ingresa un nombre: " << endl;
    cin >> nombre;

    cout << "Ingresa carrera: " << endl;
    cin >> carrera;

    cout << "Ingresa el semestre: " << endl;
    cin >> semestre;

    cout << nombre << " de carrera " << carrera << " en semestre " << semestre << endl;

    cout << "Desear continuar? 1 es si, 0 es no";
    cin >> continuar;

  }

}