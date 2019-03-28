#pragma once
#include "enemy.h"

class Warrior : public Enemy {
public:
	virtual void EnemyMethod() override;
	Warrior(const std::string& type);
};


