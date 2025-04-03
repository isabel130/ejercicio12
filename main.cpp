// Algortimo que reciba un número del 1 al 7 y muestre el donmbre del día de la semana.

#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    int numero;

    cout << "Ingrese un numero del 1 al 7: ";
    cin >> numero;

    while (numero <= 0 or numero > 7) {
        cout << "Numero no valido. Por favor, ingrese un numero del 1 al 7: ";
    }

    if (numero == 1) {
        cout << "El dia de la semana es Lunes";
    }
    else if (numero == 2) {
        cout << "El dia de la semana es Martes";
    }
    else if (numero ==3) {
        cout << "El dia de la semana es Miercoles";
    }
    else if (numero == 4) {
        cout << "El dia de la semana es Jueves";
    }
    else if (numero == 5) {
        cout << "El dia de la semana es Viernes";
    }
    else if (numero == 6) {
        cout << "El dia de la semana es Sabado";
    }
    else {
        cout << "El dia de la semana es Domingo";
    }

    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.