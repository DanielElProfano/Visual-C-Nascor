// Clases.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

// Create a Car class with some attributes
class Car {
public:
    string brand;
    string model;
    int year;

    // Creación de un método para imprimir por consola

    void showModel(string band, string model, int year) {
        cout << band << " " << model << " " << year << "\n";
    }
};

int main() {
    // Creo el objeto 1
    Car carObj1;

    //Metemos de forma manual los datos de los atributos.
    cout << "Introduce la marca: ";
    cin >> carObj1.brand;
    cout << "\n";
    cout << "Introduce la modelo: ";
    cin >> carObj1.model;
    cout << "\n";
    cout << "Introduce año de fabricacion: ";
    cin >> carObj1.year;
    cout << "\n";


    // Creación de una nueva instancia de la clase Car
    Car carObj2;
    carObj2.brand = "Ford";
    carObj2.model = "Mustang";
    carObj2.year = 1969;

    // Imprimo por constola
    carObj1.showModel(carObj1.brand, carObj1.model, carObj1.year);
 
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
    return 0;
}