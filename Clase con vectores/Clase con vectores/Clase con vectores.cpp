// Clase con vectores.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Alumno {
    string name;
    float nota;


public:// Creación de un método para imprimir por consola

    Alumno(string name, float nota) {
        this -> name = name;
        this -> nota= nota;
    }

    void printData() {
        cout << "ALUMNO:\t " << name << "\t NOTA:\t " << nota << endl;
    }
};


int main()
{
	string name;
	float nota;
    vector<Alumno> alumnos;

    for (int i = 0; i < 2; i++) {
        cout << "\nIntroduce el nombre del alumno: ";
        cin >> name;
        cout << "\nIntroduce nota: ";
        cin >> nota;
        alumnos.push_back(Alumno(name, nota));
    }

    for (int i = 0; i < alumnos.size(); i++) {
        alumnos[i].printData();
    }
}

