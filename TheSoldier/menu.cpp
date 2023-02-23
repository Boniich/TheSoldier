# include <iostream>
# include "menu.h"
using namespace std;

void showMainMenu() {
	cout << "\n";
	cout << "-== Bienvenido al campo de entrenamiento, Soldado ==- \n";
	cout << "¿Que desea hacer? \n";
	printf("(presione el numero correspondiente a la opcion del menu) \n");
	cout << "1- Recoger Armar \n";
	cout << "2- Dejar Arma \n";
	cout << "3- Disparar \n";
	cout << "4- Ver arma en uso \n";
	cout << "X- Salir \n";
}

void showSelectWeaponMenu() {
	cout << "\n";
	cout << "Por favor, escoja el arma que desea utilizar: \n";
	cout << "1- Revolver \n";
	cout << "2- Rifle \n";
	cout << "3- Escopeta \n";
	cout << "5- Volver a Atras\n";
}

void showSelectLeftWeaponMenu() {
	cout << "\n";
	cout << "El soldado ya tiene un arma en sus manos...";
	cout << "\nDeseas dejar esta arma? \n";

	cout << "1- Dejar Arma\n";
	cout << "5- Volver a Atras\n";
}

void showSoldierHasWeaponMsg() {
	cout << "\n";
	cout << "El soldado ya tiene un arma en sus manos...";
	cout << "\nPor favor, Seleccione una option: \n";
	cout << "5- Volver a Atras\n";
}

void showComeBackMsg() {
	cout << "\n5- Volver a Atras\n";
}

void showLeftWeaponMsg() {
	cout << "El arma ha sido dejada\n";
}

void showOptionNoValidMsg() {
	cout << "\nOption no valida, vuelve a elegir: \n";
}

void showSoldierDoNotHaveWeaponMsg() {
	cout << "\n";
	cout << "El soldado no tiene un arma en sus manos...";
	cout << "\nPor favor, Seleccione una option: \n";
}