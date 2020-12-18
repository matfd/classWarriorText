#include "Warrior.h"
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
Warrior::Warrior() :name(" "), hp(0), damage(0), pts(0), armor(0) {}
Warrior::Warrior(std::string fname, float fhp, float fdamage, float fpts, float farmor) : name(fname), hp(fhp), damage(fdamage), pts(fpts), armor(farmor) {}
std::string Warrior::getName() { return name; }
float Warrior::getHP() { return hp; }
float Warrior::getDamage() { return damage; }
float Warrior::getPts() { return pts; }
float Warrior::getArmor() { return armor; }
void Warrior::setName(std::string fname) { name = fname; }
void Warrior::setHP(float fhp) { hp = fhp; }
void Warrior::setDamage(float fdamage) { damage = fdamage; }
void Warrior::setPts(float fpts) { pts = fpts; }
void Warrior::setArmor(float farmor) { armor = farmor; }
void Warrior::showStatus() {
	std::cout << " name " << name << " Health " << hp << " damage " << damage << " pts " << pts << " armor " << armor << std::endl;
}