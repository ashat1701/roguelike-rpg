#pragma once
#include "enemy-builder.h"
#include "archer.h"

class ArcherBuilder : public EnemyBuilder {
public:
	ArcherBuilder(const std::string& type);
	Archer* Create() const override;
private:
};