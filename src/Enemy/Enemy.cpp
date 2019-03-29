#include "Enemy.h"

int Enemy::GetHealth() {
	return health;
}

int Enemy::GetMana() {
	return mana;
}

std::string Enemy::GetType() {
	return type;
}

Enemy::Enemy(const std::string & type) {
	this->type = type;
}

void Enemy::SetHealth(int health) {
	this->health = health;
}

void Enemy::SetMana(int mana) {
	this->mana = mana;
}

void Enemy::SetType(std::string type) {
	this->type = type;
}

