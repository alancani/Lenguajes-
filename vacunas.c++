#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int mnino = 10;
    int contador = 0;
    int CPolio = 0, CRotavirus = 0, CAmarilla = 0;
    int edad;
    char vacuna;
    char continuar;
    string nombre;


    while (contador < mnino) {
        cout << "Registro del nino " << contador + 1 << endl;

       
       
            cout << "Ingrese el nombre del nino: ";
            cin >> nombre;
       
       
        do {
            cout << "Ingrese la edad en meses (0-60): ";
            cin >> edad;

            if (edad < 0 || edad > 60) {
                cout << "Edad inválida. Debe estar entre 0 y 60 meses.";
            }

        } while (edad < 0 || edad > 60);

       
        do {
            cout << "Tipo de vacuna (P=Polio, R=Rotavirus, A=Amarilla): ";
            cin >> vacuna;
            vacuna = toupper(vacuna);

            if (vacuna != 'P' && vacuna != 'R' && vacuna != 'A') {
                cout << "Vacuna inválida. Ingrese P, R o A.";
            }

        } while (vacuna != 'P' && vacuna != 'R' && vacuna != 'A');

       
        if (vacuna == 'P') {
            CPolio++;
        }
        else if (vacuna == 'R') {
            CRotavirus++;
        }
        else if (vacuna == 'A') {
            CAmarilla++;
        }

        contador++;

       
        if (contador < mnino) {
            cout << "¿Desea registrar otro niño? S/N: ";
            cin >> continuar;
            continuar = toupper(continuar);

            if (continuar == 'N') {
                break;
            }
        }
    }

    cout << "Total niños vacunados: " << contador << endl;
    cout << "Polio: " << CPolio << endl;
    cout << "Rotavirus: " << CRotavirus << endl;
    cout << "Amarilla: " << CAmarilla << endl;

    return 0;
}
