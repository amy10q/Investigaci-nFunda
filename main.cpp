#include <iostream>
#include <string>

using namespace std;

int main() {
    string email;
    string telefono;

    cout << "Ingrese su nombre: ";
    getline(cin, nombre);
  
    cout << "Ingrese su email: ";
    getline(cin, email);


    cout << "Ingrese su teléfono: ";
    getline(cin, telefono);

    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Email: " << email << endl;
   

    return 0;
}
