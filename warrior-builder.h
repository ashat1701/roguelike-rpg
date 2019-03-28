#pragma once
#include "enemy-builder.h"
#include "warrior.h"

class WarriorBuilder : public EnemyBuilder {
public:
	WarriorBuilder(const std::string& type);
	Warrior* Create() const override;
private:
};
