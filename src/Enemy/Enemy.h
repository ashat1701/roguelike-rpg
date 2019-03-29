#pragma once
#include <string>

class Enemy {
public:
	Enemy() = default;
	virtual ~Enemy() = default;
	int GetHealth();
	int GetMana();
	std::string GetType();
    void SetHealth(int health);
    void SetMana(int mana);
    void SetType(std::string type);
	Enemy(const std::string& type);
protected:
	int health;
	int mana;
	std::string type;
};
