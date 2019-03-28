#pragma once
#include <string>

class Enemy {
public:
	virtual void EnemyMethod() = 0;
	Enemy() = default;
	virtual ~Enemy() = 0;
	int GetHealth();
	int GetMana();
	Enemy(const std::string& type);
protected:
	int health;
	int mana;
	std::string type;
};