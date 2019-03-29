#pragma once
#include <string>

class Enemy {
public:
	virtual void EnemyMethod() = 0;
	Enemy() = default;
	virtual ~Enemy() = default;
	int GetHealth();
	int GetMana();
    void SetHealth(int health);
    void SetMana(int mana);
    std::string GetType();
    void SetType(std::string type);
	Enemy(const std::string& type);
protected:
	int health;
	int mana;
	std::string type;
};
