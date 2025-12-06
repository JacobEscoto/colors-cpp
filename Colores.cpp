#include <iostream>
#include <iomanip>
#include <string>
#include <Windows.h>
using namespace std;

void imprimirColor(HANDLE hConsole, int color) {
	SetConsoleTextAttribute(hConsole, color);
	cout << "||||||||||||||||||||||||";
	SetConsoleTextAttribute(hConsole, 15);
}

void imprimirTabla(string colores[]) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "+---------+--------------------------+--------------------------+\n";
	cout << "| Codigo  | Nombre del Color         | Salida                   |\n";
	cout << "+---------+--------------------------+--------------------------+\n";
	for (int indice = 0; indice < 16; indice++) {

		cout << "| " << left << setw(7) << indice
			<< " |  " << left << setw(24) << colores[indice]
			<< "| ";
		imprimirColor(hConsole, indice);
		cout  << " ";

		cout << "|\n";
	}
	cout << "+---------+--------------------------+--------------------------+\n";
}

int main() {
	string colores[16] = {
		"Negro", "Azul", "Verde", "Cian", "Rojo", "Purpura",
		"Amarillo", "Blanco", "Gris", "Azul Claro", "Verde Claro",
		"Aqua Claro", "Rojo Claro", "Rosa", "Amarillo Claro", "Blanco Brillante"
	};
	imprimirTabla(colores);
}