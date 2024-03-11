// Strings.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main()
{   
    setlocale(LC_ALL, "es_ES_utf-8");
    string name;
    cout << "Introduce tu nombre y apellido: ";
    getline (cin,name);
    cout << "Tu nombre es: " << name << endl;
    cout << "Tu inicial es: " << name[0] << endl;
    cout << "la longitud de tu nombre y apellido es: " << name.length() << endl;
    system("pause");
}
