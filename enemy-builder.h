#pragma once
#include "enemy.h"
#include <string>

class EnemyBuilder {
public:
	virtual Enemy* Create() const = 0;
	EnemyBuilder(const std::string& type);
	EnemyBuilder() = default;
	virtual ~EnemyBuilder() = 0;
protected:
	std::string type;
};

