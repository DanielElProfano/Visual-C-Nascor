// Bucle for media.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>

using  namespace std;

int main()
{
    int notas[5];
    float media;
    float total = 0;
    for (int i = 0; i < 5; i++) {
        cout << "introduce nota: ";
        cin >> notas[i];
        total += notas[i];
    }
    for (int i = 0; i < 5; i++) {
        cout << "la nota " << i + 1 << " es: " << notas[i] << endl;
    }
        media = total / 5;
        cout << "la media de todas las notas es: " << media; 

    return total;
}
