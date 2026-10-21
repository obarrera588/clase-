#include <iostream>
using namespace std;

double areaCuadrado(double lado) {
    return lado * lado;
}

double volumenCilindro(double radio, double altura) {
    return 3.1416 * radio * radio * altura;
}

double volumenEsfera(double radio) {
    return (4.0 / 3.0) * 3.1416 * radio * radio * radio;
}

int main() {
    int opcion;
    double lado, radio, altura;

    cout << "1. Area del cuadrado" << endl;
    cout << "2. Volumen del cilindro" << endl;
    cout << "3. Volumen de la esfera" << endl;
    cout << "4. Salir" << endl;
    cout << "Seleccione una opcion: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Ingrese el lado del cuadrado: ";
            cin >> lado;
            cout << "Area: " << areaCuadrado(lado);
            break;

        case 2:
            cout << "Ingrese el radio del cilindro: ";
            cin >> radio;
            cout << "Ingrese la altura del cilindro: ";
            cin >> altura;
            cout << "Volumen: " << volumenCilindro(radio, altura);
            break;

        case 3:
            cout << "Ingrese el radio de la esfera: ";
            cin >> radio;
            cout << "Volumen: " << volumenEsfera(radio);
            break;

        case 4:
            cout << "Saliendo del programa...";
            break;

        default:
            cout << "Opcion no valida";
    }

    return 0;
}