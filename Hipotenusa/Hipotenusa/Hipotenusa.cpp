// Hipotenusa.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a, b;
	double result;

	cout << "CALCULO DE LA HIPOTENUSA\n";
	cout << "Introduce cateto a: ";
	cin >> a;
	cout << "\nIntroduce cateto b: ";
	cin >> b;
	result = hypot(a, b);
	cout << "\nresultado con hypot: " << result;
	result = sqrt(pow(a, 2) + pow(b, 2));
	cout << "\nUsando otros operadores: " << result << endl;
	system("pause");
	return 0;

}
