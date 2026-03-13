#include <iostream>

using namespace std;
int main() {
    int N;
    int suma = 0;
    int divisores = 0;

    cout << "Ingrese un número: ";
    cin >> N;

    cout << "\nTabla de multiplicar de " << N << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << N << " x " << i << " = " << N * i << endl;
    }


    for (int i = 1; i <= N; i++) {
        suma += i;
    }
    cout << "Suma acumulada desde 1 hasta " << N << ": " << suma << endl;

    if (N > 1) {
        for (int i = 1; i <= N; i++) {
            if (N % i == 0) {
                divisores++;
            }
        }

        if (divisores == 2) {
            cout << N << "es primo." << endl;
        } else {
            cout << N << "no es primo." << endl;
        }
    } else {
        cout << N << “no es primo." << endl;
    }

    return 0;
}
