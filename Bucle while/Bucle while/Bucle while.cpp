// Bucle while.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//


#include <iostream>
#include <string>
#include <locale.h>
#include <stdlib.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "es_ES.utf-8");
    int num, i = 0;
    string name;
    do {
        system("cls");
        cout << "intento " << i << " - ";
        cout << "Verifica que eres humano. ¿Cuanto es 9 + 5?: ";
        cin >> num;
        i++;
        if (num != 14) {
            cout << "Errooooooor, ¡¡¡no me seas ANIMAL!!!\n";
            system("pause");
        }

    } while (num != 14 && i < 3);
    if (i == 3) {
        cout << "Venga hombre que son 14, que no es tan difícil";
    }
    else {
        cout << "Enhorabuena Humano";
    }
    return 0;
}