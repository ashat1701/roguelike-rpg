#include "Enemy.h"

int Enemy::GetHealth() {
	return health;
}

int Enemy::GetMana() {
	return mana;
}

Enemy::Enemy(const std::string & type) {
	this->type = type;
}

// TODO: Setters for all fields and Getter for type!!
