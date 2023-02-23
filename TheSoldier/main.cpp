# include <iostream>
#include "weapon.h"
#include "soldier.h"
#include "menu.h"

using namespace std;



int main() {

	string option;
	Soldier soldier;
	Gun* gun = new Gun();
	Rifle* rifle = new Rifle();
	ShotGun* shootGun = new ShotGun();

	while (option != "x") {
		showMainMenu();
		cin >> option;

		if (option == "1") {


			if (soldier.isThereWeapon()) {
				system("cls");
				showSoldierHasWeaponMsg();
				cin >> option;
				system("cls");
			}
			else {
				system("cls");
				showSelectWeaponMenu();
				cin >> option;
				system("cls");

				if (option == "1") {
					soldier.takeWeapon(gun);
					showComeBackMsg();
					cin >> option;
				}
				else if (option == "2") {
					soldier.takeWeapon(rifle);
					showComeBackMsg();
					cin >> option;
				}
				else if(option == "3") {
					soldier.takeWeapon(shootGun);
					showComeBackMsg();
					cin >> option;
				}
				system("cls");
			}
		}
		else if (option == "2") {

			if (soldier.isThereWeapon()) {
				system("cls");
				showSelectLeftWeaponMenu();
				cin >> option;
				system("cls");
				

				if (option == "1") {

					system("cls");
					soldier.leftWeapon();

					cout << "\n";
					showLeftWeaponMsg();
					showComeBackMsg();
					cin >> option;
					system("cls");
				}
			}
			else {
				system("cls");

				showSoldierDoNotHaveWeaponMsg();
				showComeBackMsg();
				cin >> option;
				system("cls");
			}
			
		}
		else if (option == "3") {

			system("cls");
			if (soldier.isThereWeapon()) {
				soldier.shootWeapon();
			}
			else {
				showSoldierDoNotHaveWeaponMsg();
			}

			showComeBackMsg();
			cin >> option;
			system("cls");

		}
		else if (option == "4") {

			system("cls");
			if (soldier.isThereWeapon()) {
				soldier.showWeaponName();
			}
			else {

				showSoldierDoNotHaveWeaponMsg();
			}

			showComeBackMsg();
			cin >> option;
			system("cls");
			
		}
		else if (option == "x") {
			EXIT_SUCCESS();
		}
		else {
			showOptionNoValidMsg();
		}
	}

	
	cin.get();
	return 0;
}