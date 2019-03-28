#pragma once

#include "Enemy.h"

class Archer : public Enemy {
public:
	Archer(const std::string& type);
	virtual void EnemyMethod() override;
private:

};
