#include <iostream>
using namespace std;
int main()
{
    double nota;
    cout << "Ingrese su nota de (0 a 5): ";
    cin >> nota;

    if (nota >= 0 && nota <= 5) {

        if (nota <= 2.9) {
            cout << "El estudiante REPRUEBA.";
        }
        else{
        
            if (nota>=3 && nota<= 4.5){
                cout << "El estudiante APRUEBA.";

            }
            else
            {
                cout << "El estudiante es EXCELENTE.";
            }
        }
        
    }
    else
    {
        cout << "Error su nota debe ser de (0 a 5)";
    }

    return 0;
}
