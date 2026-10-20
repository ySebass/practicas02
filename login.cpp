#include <iostream>
#include <string>

using namespace std;

int main() {
    string usuario, contraseña;

    cout << "Usuario: ";
    cin >> usuario;

    cout << "Contraseña: ";
    cin >> contraseña;

    if (usuario == "admin" && contraseña == "1234") {
        cout << "Acceso correcto. Bienvenido al sistema!" << endl;
    } else {
        cout << "Usuario o contraseña incorrectos." << endl;
    }

    return 0;
}
