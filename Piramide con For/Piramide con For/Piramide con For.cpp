// Piramide con For.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <Windows.h>

using namespace std;


int main()
{
    int high;
    cout << "Altura de la piramide: ";
    cin >> high;

    for (int i = high; i > 0; i--) {
        for (int j = i; j > 0; j--) {
            cout << "*";
        }
        cout << std::endl;
        Sleep(500);
    }
}