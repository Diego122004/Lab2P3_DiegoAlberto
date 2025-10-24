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

                        if (i % j == 0) {// verifica cuantos divisores tiene
                            contDeDiv++;
                        }
                    }
                    if (contDeDiv == 2) {//verifica que sean num primos
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

            for (int i = 1; i <= n; i++) {

                if (i %n == 0) {// verifica que i sea divisor de j

                    suman += i;
                }
                // cout << suman << endl;
            };

            for (int j = 1; j < m; j++) {

                    if (m % j == 0) {

                        sumam += j;
                    }
                    // cout << suman << endl;
                
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
            int n;
            int m;
            int num1 = 0;
            int num2 = 1;
            int fibo = num1 + num2;
            cout << "Ingrese el lim de la serie" << " ";
            cin >> n;
            cout << "Ingrese el número para verificar si pertenece a la serie" << " ";
            cin >> m;
            while (fibo <= n) {

                cout << ", " << num1 << ", " << num2 << ", " << fibo;
                num1++;
                num2++;
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

