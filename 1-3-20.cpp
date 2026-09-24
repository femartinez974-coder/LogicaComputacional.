#include <iostream>
#include <string>

using namespace std;

int main() {
    float nota;
    string calificacion;

    cout << "Digite la nota a evaluar: ";
    cin >> nota;

    if (nota >= 0 && nota <= 10) {
        if (nota < 5.0) {
            calificacion = "Suspenso";
        } else if (nota < 6.5) {
            calificacion = "Aprobado";
        } else if (nota < 8.5) {
            calificacion = "Notable";
        } else if (nota < 10.0) {
            calificacion = "Sobresaliente";
        } else {
            calificacion = "Matrícula de honor";
        }

        cout << "Calificación: " << calificacion << endl;
    } else {
        cout << "Nota no válida." << endl;
    }

    return 0;
}
