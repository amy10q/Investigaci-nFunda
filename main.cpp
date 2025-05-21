#include <iostream>
#include <string>

using namespace std;

int main() {

    string nombre;
    cout << "Ingrese su nombre: ";
    getline(cin, nombre);
    cout << "Nombre: " << nombre << endl;
    return 0;
}