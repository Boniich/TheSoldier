#pragma once

#include <iostream>
#include "weapon.h"

using namespace std;

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
	weaponPointer = weapon;
	showWeaponName();
}

void Soldier::leftWeapon() {
	weaponPointer = NULL;
}

void Soldier::showWeaponName() {
	cout << "El arma seleccionada es: ", weaponPointer->showWeaponName();
}

void Soldier::shootWeapon() {
	weaponPointer->shootWeapon();
}
