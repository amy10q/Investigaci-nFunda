#include <iostream>
#include <string>

using namespace std;

int main() {
    string email;
    string telefono;

    cout << "------------------":

    cout << "Ingrese su email: ";
    getline(cin, email);

    cout << "Ingrese su teléfono: ";
    getline(cin, telefono);

    cout << "Email: " << email << endl;
    cout << "Teléfono: " << telefono << endl;

    return 0;
}