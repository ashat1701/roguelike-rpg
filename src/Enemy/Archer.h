#pragma once

#include "Enemy.h"

class Archer : public Enemy {
public:
	Archer(const std::string& type);
	virtual std::string Message() const override;
private:

};
