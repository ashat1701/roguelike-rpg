#pragma once
#include "Enemy.h"
#include <string>

class EnemyFactory {
public:
	virtual Enemy* Create() const = 0;
	EnemyFactory(const std::string& type);
	EnemyFactory() = default;
	virtual ~EnemyFactory() = default;
protected:
	std::string type;
};
