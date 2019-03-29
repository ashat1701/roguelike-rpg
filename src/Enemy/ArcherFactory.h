#pragma once
#include "EnemyFactory.h"
#include "Archer.h"

class ArcherFactory : public EnemyFactory {
public:
	ArcherFactory(const std::string& type);
	Archer* Create() const override;
private:
};
