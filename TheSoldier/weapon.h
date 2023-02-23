#pragma once

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