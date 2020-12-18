#include "Warrior.h"
#include <Windows.h>
#include <iostream>
using namespace std;
int main() {
	Warrior knight("Knight", 1000, 300, 1, 100);
	Warrior paladin("Paladin", 800, 200, 1.5, 300);
	 while (knight.getHP() >= 0 && paladin.getHP() >= 0) {
		//рыцарь наносит удар паладину
		cout << "Knight attack Paladin :" << endl;
		float damage = knight.getDamage();
		float armor = paladin.getArmor();
		float part = armor / 1000;
		float pdamage = damage * (1 - part);
		float hp = paladin.getHP();
		hp = hp - pdamage;
		paladin.setHP(hp);
		paladin.showStatus();
		Sleep(1000);
		//паладин наносит удар рыцарю
		cout << "Paladin attack Knight :" << endl;
		damage = paladin.getDamage();
		armor = knight.getArmor();
		part = armor / 1000;
		pdamage = damage * (1 - part);
		hp = knight.getHP();
		hp = hp - pdamage;
		knight.setHP(hp);
		knight.showStatus();
		Sleep(1000);
	}
	if (paladin.getHP() > 0) cout << "Paladin wins\n";
	else
		if (knight.getHP() > 0) cout << "Knight wins\n";
		else cout << "Draw\n";
}