#pragma once

#include "enemy.h"

class Archer : public Enemy {
public:
	Archer(const std::string& type);
	virtual void EnemyMethod() override;
private:

};
