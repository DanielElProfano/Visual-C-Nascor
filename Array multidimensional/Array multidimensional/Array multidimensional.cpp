// Array multidimensional.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>


using namespace std;

int main()
{
	int matriz[3][3] = {
	 {1, 2, 3},
	 {4, 5, 6},
	 {7, 8, 9}
	};
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matriz[i][j] << ",";
		}
		cout << "\n";
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (matriz[i][j] % 3 == 0) {
				j++;
				cout << 'a' << ',';
			}
			else {
				cout << matriz[i][j] << ",";
			}
		}
		cout << "\n";
	}

	return 0;
}
