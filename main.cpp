#include <iostream>
#include <string>

using namespace std;

int mainn(){

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

<<<<<<< HEAD
    cout << "Su correo electronico: " << email << endl;
=======
    cout << "Sun email es: " << email << endl;
>>>>>>> 42f039082cde0bb6de6f6320766e9cce56383d85
    cout << "Teléfono: " << telefono << endl;
  
    return 0;
}
