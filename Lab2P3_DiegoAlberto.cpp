// Lab2P3_DiegoAlberto.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    int opcion;
    do {
        cout << "MENU" << endl;
        cout << "0. Salir" << endl;
        cout << "1. Números primos" << endl;
        cout << "2. Números amigables" << endl;
        cout << "3. Serie de Fibonacci" << endl;
        cin >> opcion;
        switch (opcion != 0)
        {
        case 1: {
            int n;
            int contDePrimos = 0;
            int contDeDiv = 0;
            cout << "Ingrese un valor de n mayor a 1" << " ";
            cin >> n;
            while ( n != 0 && n >= 1) {
              
                if (n == 0) {
                    cout << "El programa a terminado";
                    break;
                }
               

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



                cout << "El numero de primos entre" << " " << "0" << " " << " y" << " " << n << " " << "es :" << contDePrimos << "\n";
              
            };

           /* do {
                cout << "Ingrese un valor de n mayor a 1"<<" ";
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



                cout << "El numero de primos entre" << " " << "0" << " " << " y" << " " << n << " " << "es :" << contDePrimos << "\n";

                cout << "Ingrese un valor de n mayor a 1\n";
                cin >> n;

            } while (n <= 1 && n != 0 && n >= 1);*/

           /* if (n == 0) {
                cout << "El programa a terminado";
            }
            break;*/
        };
              break;

        case 2: {
            int n;
            int m;
            int suman =0;
            int sumam;
            cout << "ingrese el primer número:" << " " << endl;
            cin >> n;
            cout << "ingrese el segundo número:" << " " << endl;
            cin >> m;
            for (int i = 2; i < n; i++) {

                for (int j = 1; j <= i; j++) {
                
                    if (i%j == 0) {
                    
                        suman += j;
                    }
                    cout << suman << endl;
                };
            };
            


        };
              break;
        case 3: {
           
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

