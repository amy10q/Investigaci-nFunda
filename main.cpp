// Programa de registro sencillo

#include <iostream>
#include <string>

using namespace std;

int main(){

    string nombre;
    cout << "Ingrese su nombre: ";
    getline(cin, nombre);
    cout << "Nombre: " << nombre << endl;

    string email;
    string telefono;    
  
    cout << "Ingrese su email: ";
    getline(cin, email);

    cout << "Ingrese su teléfono: ";
    getline(cin, telefono);

    cout << "Sun email es: " << email << endl;
    cout << "Teléfono: " << telefono << endl;
  
    return 0;
}
