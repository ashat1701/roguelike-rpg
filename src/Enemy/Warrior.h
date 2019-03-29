#pragma once
#include "Enemy.h"

class Warrior : public Enemy {
public:
	Warrior(const std::string& type);
	virtual std::string Message() const override;
};


