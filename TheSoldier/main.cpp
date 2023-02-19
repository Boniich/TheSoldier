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
	void takeWeapon();
	void leftWeapon();
	void shootWeapon();
	void showWeaponName();


private:
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

void Soldier::takeWeapon() {

	int option = 0;

	if (isThereWeapon()) {
		cout << "El soldado ya tiene un arma en sus manos...";
		cout << "\nPor favor, Seleccione una option: \n";
		cout << "5- Volver a Atras\n";
		cin >> option;
	}

	while (option != 5) {

		cout << "\n";
		cout << "Por favor, escoja el arma que desea utilizar: \n";
		cout << "1- Revolver \n";
		cout << "2- Rifle \n";
		cout << "3- Escopeta \n";

		cin >> option;

		if (option == 1) {
			Gun gun;
			weaponPointer = &gun;
			showWeaponName();

			cout << "\nPor favor, Seleccione una option: \n";
			cout << "5- Volver a Atras\n";
			cin >> option;
		}
		else if (option == 2) {
			Rifle rifle;
			weaponPointer = &rifle;
			showWeaponName();

			cout << "\nPor favor, Seleccione una option: \n";
			cout << "5- Volver a Atras\n";
			cin >> option;

		}
		else if (option == 3) {
			ShotGun shootGun;
			weaponPointer = &shootGun;
			showWeaponName();

			cout << "\nPor favor, Seleccione una option: \n";
			cout << "5- Volver a Atras\n";
			cin >> option;
		}

	}

}

void Soldier::leftWeapon() {
	cout << "No hace nada";
}

void Soldier::showWeaponName() {
	cout << "El arma seleccionada es: ", weaponPointer->showWeaponName();
}

void Soldier::shootWeapon() {
	weaponPointer->shootWeapon();
}


int main() {


	// no funciona
	// Gun gun;
	//gun.shootWeapon();
	//no funciona
	//Gun* gun = new Gun();
	//gun->shootWeapon();

	
	//Gun gun;
	//weaponPointer = &gun;

	//Rifle rifle;
	//weaponPointer = &rifle;
	/*
	Weapon* weaponPointer;

	ShotGun shotGun;
	weaponPointer = &shotGun;

	cout << "Name Weapon: ", weaponPointer->showWeaponName();
	cout << "\n";
	cout << "Shoot sound: ", weaponPointer->shootWeapon();
	*/

	int option;
	Soldier soldier;

	while (1 == 1) {
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

		switch (option)
		{
		case 1:
			soldier.takeWeapon();
			break;
		case 2:
			soldier.leftWeapon();
			break;
		case 3:
			soldier.shootWeapon();
			break;
		case 4:
			soldier.showWeaponName();
			break;
		default:
			break;
		}
	}

	
	cin.get();
	return 0;
}