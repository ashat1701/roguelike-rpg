#pragma once
#include "world-state.h"
#include "warrior-builder.h"
#include "archer-builder.h"
#include <vector>

class Army {
public:
	void AddUnits(const EnemyBuilder* EnemyBuilder, int count);
	void UpdateWorld(WorldState& WorldState);
private:
	std::vector<Enemy*> Enemies;
};