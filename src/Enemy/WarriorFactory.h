#pragma once
#include "EnemyFactory.h"
#include "Warrior.h"

class WarriorFactory : public EnemyFactory {
public:
	WarriorFactory(const std::string& type);
	Warrior* Create() const override;
private:
};
