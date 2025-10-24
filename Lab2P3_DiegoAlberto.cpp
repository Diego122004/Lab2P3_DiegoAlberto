// Lab2P3_DiegoAlberto.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");
    int opcion;
    do {
        cout << "MENU" << endl;
        cout << "0. Salir" << endl;
        cout << "1. Números primos" << endl;
        cout << "2. Números amigables" << endl;
        cout << "3. Serie de Fibonacci" << endl;
        cin >> opcion;
        switch (opcion)
        {
        case 1: {
            int n;
            int contDePrimos = 0;
            int contDeDiv = 0;

            do {
                cout << "Ingrese un valor de n mayor a 1"<< " ";
                cin >> n;

                for (int i = 2; i < n; i++) {

                    for (int j = 1; j <= i; j++) {

                        if (i % j == 0) {
                            contDeDiv++;
                        }
                    }
                    if (contDeDiv == 2) {
                        contDePrimos++;
                    }
                    contDeDiv = 0;
                }

                //cout << "El numero de primos en" <<" " << n << "Es " << " " << contDePrimos;



                cout << "El numero de primos entre" << " " << "0" << " " << " y" << " " << n << " " << "Es " << contDePrimos << "\n";

                cout << "Ingrese un valor de n mayor a 1\n";
                cin >> n;

            } while (n != 0 && n >= 1);

            if (n == 0) {
                cout << "El programa a terminado";
                break;
            }
          
        };
              break;

        case 2: {
            int n;
            int m;
            int suman =0 ;
            int sumam =0;
            cout << "ingrese el primer número:" << " ";
            cin >> n;
            cout << "ingrese el segundo número:" << " ";
            cin >> m;
            for (int i = 1; i < n; i++) {

                for (int j = 1; j <= i; j++) {
                
                    if (i%j == 0) {
                    
                        suman += j;
                    }
                   // cout << suman << endl;
                };
            };
            for (int a = 1; a < m; a++) {

                for (int b = 1; b <= a; b++) {

                    if (a % b == 0) {

                        sumam += b;
                    }
                    // cout << suman << endl;
                };
            };
            if (suman == sumam) {

                cout << "Son amigables" << endl;
            }
            else {
                cout << "No nos amigables";

            };

        };
              break;
        case 3: {
            int num;
            int fibo;
            cout << "Ingrese el numero" << " ";
            cin >> num;
                for (int i = 0; i = num; i++) {
                    cout << i;
                    for (int j = 0; i <= i; j++) {
                        cout << j;
                        fibo = i + j;
                    };
                };

           
        };
              break;
        case 0: {

            };
              break;
        default:
           
            break;
        };
    } while (opcion != 0);
}

