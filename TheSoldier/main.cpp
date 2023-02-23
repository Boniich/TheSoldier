# include <iostream>

using namespace std;

class Weapon {
protected:
	string weaponName = "undefined";
public:
	virtual void shootWeapon() {

		cout << "Write sound of shoot";
	}
	void showWeaponName() {
		cout << weaponName;
	}
};




class Gun : public Weapon {

public:
	Gun();
	void shootWeapon() {
		cout << "Pum";
	}


};

Gun::Gun() {
	weaponName = "Gun";
}

class Rifle : public Weapon {
public:
	Rifle();
	void shootWeapon() {
		cout << "Pum Pum Pum";
	}
};

Rifle::Rifle() {
	weaponName = "Rifle";
}

class ShotGun : public Weapon {
public:
	ShotGun();
	void shootWeapon() {
		cout << "Pam";
	}
};

ShotGun::ShotGun() {
	weaponName = "Shotgun";
}

// Soldier

class Soldier {
private:
	Weapon* weaponPointer = NULL;
public:
	void takeWeapon(Weapon* weapon);
	void leftWeapon();
	void shootWeapon();
	void showWeaponName();
	bool isThereWeapon();
};

bool Soldier::isThereWeapon() {
	if (weaponPointer) {
		return true;
	}
	else {
		return false;
	}
}

void Soldier::takeWeapon(Weapon* weapon) {

	int option;

	weaponPointer = weapon;
	cout << "El arma seleccionada es: ", weaponPointer->showWeaponName();
	cout << "\n5- Volver a Atras\n";
	cin >> option;
}

void Soldier::leftWeapon() {

	int option = 0;

	weaponPointer = NULL;
	cout << "\n";
	cout << "El arma ha sido dejada\n";
	cout << "5- Volver a Atras\n";
	cin >> option;
		
}

void Soldier::showWeaponName() {

	int option = 0;

	if (!isThereWeapon()) {
		cout << "El soldado no tiene un arma en sus manos...";
		cout << "\nPor favor, Seleccione una option: \n";

		cout << "5- Volver a Atras\n";
		cin >> option;
	}
	else {
		cout << "El arma seleccionada es: ", weaponPointer->showWeaponName();
		
		cout << "\nPor favor, Seleccione una option: \n";

		cout << "5- Volver a Atras\n";
		cin >> option;
	}

	
}

void Soldier::shootWeapon() {
	weaponPointer->shootWeapon();
}


int main() {

	int option;
	Soldier soldier;
	Gun* gun = new Gun();
	Rifle* rifle = new Rifle();;
	ShotGun* shootGun = new ShotGun();;

	while (1 == 1) {
		system("cls");
		cout << "\n";
		cout << "-== Bienvenido al campo de entrenamiento, Soldado ==- \n";
		cout << "¿Que desea hacer? \n";
		printf("(presione el numero correspondiente a la opcion del menu) \n");
		cout << "1- Recoger Armar \n";
		cout << "2- Dejar Arma \n";
		cout << "3- Disparar \n";
		cout << "4- Ver arma en uso \n";
		cout << "X- Salir \n";
		cin >> option;


		if (option == 1) {


			if (soldier.isThereWeapon()) {
				system("cls");
				cout << "\n";
				cout << "El soldado ya tiene un arma en sus manos...";
				cout << "\nPor favor, Seleccione una option: \n";
				cout << "5- Volver a Atras\n";
				cin >> option;
			}
			else {
				system("cls");
				cout << "\n";
				cout << "Por favor, escoja el arma que desea utilizar: \n";
				cout << "1- Revolver \n";
				cout << "2- Rifle \n";
				cout << "3- Escopeta \n";
				cout << "5- Volver a Atras\n";
				cin >> option;
				system("cls");

				if (option == 1) {
					soldier.takeWeapon(gun);
				}
				else if (option == 2) {
					soldier.takeWeapon(rifle);
				}
				else if(option == 3) {
					soldier.takeWeapon(shootGun);
				}
			}

		}
		else if (option == 2) {

			if (soldier.isThereWeapon()) {
				system("cls");
				cout << "\n";
				cout << "El soldado ya tiene un arma en sus manos...";
				cout << "\nDeseas dejar esta arma? \n";

				cout << "1- Dejar Arma\n";
				cout << "5- Volver a Atras\n";
				cin >> option;

				if (option == 1) {
					soldier.leftWeapon();
				}
			}
			else {
				cout << "\n";
				cout << "El soldado no tiene un arma en sus manos...";
				cout << "\nPor favor, Seleccione una option: \n";

				cout << "5- Volver a Atras\n";
				cin >> option;
			}
			
		}
		else if (option == 3) {

			if (soldier.isThereWeapon()) {
				soldier.shootWeapon();
			}
			else {
				cout << "Parece que el soldado no tiene un arma en sus manos \n";
			}

			cout << "\n5- Volver a Atras\n";
			cin >> option;

		}
		else if (option == 4) {
			soldier.showWeaponName();
		}
	}

	
	cin.get();
	return 0;
}